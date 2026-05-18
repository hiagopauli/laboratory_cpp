#include <iostream>
#include "quadratic.h"

int main()
{
	double a, b, c;
	std::cout << "Welcome the quadratic equator solver.\nIn the quadratic calculator, the coefficients are a, b and c. \n\n";
	std::cout << "Enter coefficient a: " << std::endl;
	std::cin >> a;

	std::cout << "Enter coefficient b: " << std::endl;
	std::cin >> b;
	
	std::cout << "Enter coefficient c: " << std::endl;
	std::cin >> c;

	
	
	if (a == 0)
	{
		std::cout << "Error, coefficient 'a' cannot be 0." << std::endl;
		return 1;
	}

	QuadraticEquation eq(a, b, c);
	QuadraticResult result = eq.solve();
	
	if (result.rootCount == 0)
	{
		std::cout << "Dont have real roots." << std::endl;
	}

	else if (result.rootCount == 1)
	{
		std::cout << "One root: x = " << result.x1 << std::endl;
	}
		
	else 
	{
		std::cout << "Two roots: " << std::endl;
		std::cout << "x1 = " << result.x1 << std::endl;
		std::cout << "x2 = " << result.x2 << std::endl << std::endl;
	}
	
	return EXIT_SUCCESS;
}
