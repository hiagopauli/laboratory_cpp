#include "person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(string n)
{
	name = n;
}


string Person::getName()
{
	return name;
}
