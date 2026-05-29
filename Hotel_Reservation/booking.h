#ifndef BOOKING_H
#define BOOKING_H

#include "person.h"
#include "room.h"
#include <string>

using namespace std;

class Booking
{
	public:
		Booking ();
		Booking (int i, Person p, Room r, string d);
		
		int 		getId();
		Person 	getPerson();
		Room 		getRoom();
		string 	getDate();


		void setDate(string d);
		void setRoom(Room r);
		void display();

	private:	
		int id;
		Person person;
		Room room;
		string date;
		
};

#endif
