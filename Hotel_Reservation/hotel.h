#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include "booking.h"

using namespace std;
class Hotel
{
	public:
		Hotel();
		
		void menu();
		void createBooking();
		void existingBooking();
	
	private:
		vector<Booking> bookings;
		
		int generateID();
		void save();
		void load();
		
};

#endif
