#include "triangle.h"

Triangle::Triangle(double a, double b, double c)
{
	this->a = a;		
	this->b = b;
	this->c = c;
	
}

bool Triangle::isValid() const
{
	return
	(a > 0 && b > 0 && c > 0) &&
	(a + b > c) &&
	(a + c > b) &&
	(b + c > a);
}

