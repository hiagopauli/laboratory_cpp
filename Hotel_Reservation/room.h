#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;

class Room
{
	public:
		Room();
		Room(string t);
		
		string getType();
	
	private:
		string type;

};

#endif
