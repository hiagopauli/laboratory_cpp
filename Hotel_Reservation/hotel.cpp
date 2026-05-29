#include "hotel.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

Hotel::Hotel()
{
	srand(time(0));
	load();
}

int Hotel::generateID()
{
	return rand() % 900 + 100;
}

void Hotel::save()
{
	ofstream file ("bookings.txt");
		
	for (auto &b : bookings)
	{
		file << b.getId() 												<< endl;
		file << b.getPerson().getName() 					<< endl;	
		file << b.getRoom().getType() 						<< endl;
		file << b.getDate() 							<< endl << endl;
	}
	
	file.close();
}

void Hotel::load()
{
	ifstream file ("bookings.txt");
	
	while (!file.eof())
	{
		int id;
		string name;
		string room;
		string date;
	
		if (!(file >> id))
			break;

		file.ignore();
		
		getline(file, name);
		getline(file, room);
		getline(file, date);
	
		Person p(name);
		Room r(room);
		
		bookings.push_back
		(
			Booking(id, p, r, date)
		);
	}
	file.close();
}

void Hotel::createBooking()
{	
	string name;
	string date;
	int roomChoice;
	
	cout << "\n Enter with your name: " << endl << endl;
	getline(cin, name);
	
	cout << "\n Select the room which you would like to book." << endl << endl;
	cout << " 1 - for Master room." 						<< endl;
	cout << " 2 - for Premium room." 						<< endl;
	cout << " 3 - for Luxury room."							<< endl;
	cout << " Enter with your Choice:" 	<< endl << endl;
	cin >> roomChoice;
	
	cin.ignore();
	string roomType;
	
	if (roomChoice == 1)
		roomType = "Master";
	else if (roomChoice == 2)
		roomType = "Premium";
	else 
		roomType = "Luxury";
	
	cout << "Enter booking enter date (dd/mm/yy): ";
	getline(cin, date);
	
	int id = generateID();
	
	Person p(name);
	Room r (roomType);

	Booking b(id, p, r, date);
	
	bookings.push_back(b);
	save();
	
	cout << "\n Booking completed.\n";
	cout << "Booking ID: " << id << endl;
}

void Hotel::existingBooking()
{
	int id;
	cout << "\n Enter booking ID: " << endl;
	cin >> id;
	
	cin.ignore();
	
	for (int i = 0; i < bookings.size(); i++)
	{
		if (bookings[i].getId() == id)
		{
			bookings[i].display();
			
			int option;
			
			cout << "\n1-Edit Booking." 	<< endl;
			cout << "2 - Cancel Booking." << endl; 
			cout << "3 - Back." 					<< endl;
			cin >> option;
	
			cin.ignore();
	
			if (option == 1)
			{
				string newDate;	
				int roomChoice;
				string roomType;
				
				cout << "\n Enter with your room:" 	<< endl;
				cout << "1 - Master." 							<< endl;
				cout << "2 - Premium." 							<< endl;
				cout << "3 - Luxury." 							<< endl;		
				cin >> roomChoice;
				cin.ignore();
				
				if (roomChoice == 1)
					roomType = "Master";
				else if (roomChoice == 2)
					roomType = "Premium";
				else 
					roomType = "Luxury";
				
				cout << "Enter new bookin date (dd/mm/yy): " << endl;
				getline (cin, newDate);
				
				bookings[i].setRoom(Room(roomType));
				bookings[i].setDate(newDate);
				save ();		
				
				cout << "\n New booking saved wiht success." << endl;
			}
			
			else if (option == 2)
			{
				bookings.erase(bookings.begin() + i);
				save();
				
				cout << "\n Booking cancelled." << endl;
			}	
			
			return;
		}
	}
	cout << "Error. Booking id doesnt exist." << endl;
}


void Hotel::menu()
{
	int choice;
	do
	{
		cout << "\n Welcome Hotel Khuriuks 5 starts Menu." 	<< endl << endl;
		cout << "Enter with your choice." 													<< endl;
		cout << "1 - New Booking." 																	<< endl;
		cout << "2 - Check or edit Booking." 												<< endl;
		cout << "3 - Close system." 												<< endl << endl;
		cin >> choice;
	
		cin.ignore();
		
		if (choice == 1)
			createBooking();
		
		else if (choice == 2)
			existingBooking();
		
	}
	while (choice != 3);
}


	



