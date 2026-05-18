#ifndef QUADRATIC_H
#define QUADRATIC_H
#pragma once

struct QuadraticResult
{
	bool hasRealRoots;
	double x1{};
	double x2{};
	int rootCount{0};
};

class QuadraticEquation
{
	
	public:
		QuadraticEquation(double a, double b, double c);

		QuadraticResult solve() const;

	private:
		double a, b, c;
		double discriminant() const;

};

#endif
