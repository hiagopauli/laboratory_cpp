#include "quadratic.h"
#include <cmath>

QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;

}

double QuadraticEquation::discriminant() const
{
	return b * b - 4 * a * c;
}

QuadraticResult QuadraticEquation::solve() const
{
	QuadraticResult result;
	double d = discriminant();
	double epsilon = 1e-10;


	if (d< -epsilon)
	{
		result.hasRealRoots = false;
		result.rootCount = 0;
	}

	else if (std::abs(d) <= epsilon)
	{
		result.hasRealRoots = true;
		result.rootCount = 1;
	
		result.x1 = -b / (2 * a);
	}

	else
	{
		result.hasRealRoots = true;
		result.rootCount = 2;
		
		double sqrtD = std::sqrt(d);
		
		result.x1 = (-b + sqrtD) / (2 * a);
		result.x2 = (-b - sqrtD) / (2 * a);
	}
	
	return result;
}

