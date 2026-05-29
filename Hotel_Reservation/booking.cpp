#include "booking.h"
#include <iostream>

using namespace std;

Booking::Booking()
{
}

Booking::Booking(int i, Person p, Room r, string d)
{
	id = i;
	person = p;
	room = r;
	date = d;
}

int Booking::getId()
{
	return id;
}

Person Booking::getPerson()
{
	return person;
}

Room Booking::getRoom()
{
	return room;
}

string Booking::getDate()
{
	return date;
}


void Booking::setDate(string d)
{
	date = d;
}

void Booking::setRoom(Room r)
{
	room = r;
}


void Booking::display()
{
	cout << "\n Booking ID: " 							<< id << endl;
	cout << "Name: " 					<< person.getName() << endl;
	cout << "Room: " 						<< room.getType() << endl;
	cout << "Date: " 							<< date << endl << endl;
	
}


