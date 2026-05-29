#include "room.h"

Room::Room() 
{
}

Room::Room(string t)
{
	type = t;
}

string Room::getType()
{
	return type;
}

