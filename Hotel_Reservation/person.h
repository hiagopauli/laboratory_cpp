#ifndef PERSON_H
#define PERSON_H

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person 
{
	public:
		Person();
		Person(string n);
		string getName();
	
	private:
		string name;
		
};

#endif
