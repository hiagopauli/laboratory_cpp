#include <iostream>

double celsius_to_fahrenheit(double c) 
{
	return (c * 9.0 / 5.0) + 32.0;
}

int main ()
{
	double celsius;

	std::cout << "Enter the celsius temperature: " << std::endl;
	std::cin >> celsius;
	
	double fahrenheit = celsius_to_fahrenheit(celsius);
	
	std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
	
	return EXIT_SUCCESS;
}
