#pragma once

class Triangle
{
	public:
		Triangle(double a, double b, double c);
		bool isValid() const;

	private:
		double a;
		double b;
		double c;

};
