#include "QuadraticExpression.h"

// No argument constructor to initialize the values
QuadraticExpression::QuadraticExpression() {
	a = 0;
	b = 0;
	c = 0;
	x = 0;
}

// Argument constructor that sets the variables
QuadraticExpression::QuadraticExpression(int newA, int newB, int newC, int newX) {
	a = newA;
	b = newB;
	c = newC;
	x = newX;
}

// Accessor functions to get(view) the values of a, b, and c
int QuadraticExpression::getA() const {
	return a;
}

int QuadraticExpression::getB() const {
	return b;
}

int QuadraticExpression::getC() const {
	return c;
}
int QuadraticExpression::getX() const {
	return x;
}

// Mutators to set the values
void QuadraticExpression::setA(int newA)
{
	a = newA;
}
void QuadraticExpression::setB(int newB)
{
	b = newB;
}
void QuadraticExpression::setC(int newC)
{
	c = newC;
}
void QuadraticExpression::setX(int newX)
{
	x = newX;
}
void QuadraticExpression::displayEquation() const 
{
	cout << "\t" << a << "x^2 + " << b << "x + " << c << endl;
}
void QuadraticExpression::getEvaluation() const
{
	double result = 0;

	result = a * (pow(x, 2)) + (b * x) + c;

	cout << "\tEvaluation result: " << result;
}
void QuadraticExpression::numRoots() const
{
	double discriminant = 0;

	discriminant = (pow(b, 2)) - (4 * a * c);

	if (discriminant < 0)
	{
		cout << "\n\tnumber of real roots: 0\n";
	}
	else if (discriminant == 0)
	{
		cout << "\n\tnumber of real roots: 1\n";
	}
	else if (discriminant > 0)
	{
		cout << "\n\tnumber of real roots: 2\n";
	}
}
void QuadraticExpression::getRoots() const 
{
	double discriminant = 0;
	double root1 = 0;
	double root2 = 0;

	discriminant = (pow(b, 2)) - (4 * a * c);

	if (discriminant < 0)
	{
		cout << "\n\tno real roots\n";
	}
	else if (discriminant == 0)
	{
		root1 = (-b + (sqrt((pow(b, 2)) - (4 * a * c)))) / (2 * a);

		cout << "\n\tonly real root: " << root1 << endl;
	}
	else if (discriminant > 0)
	{
		root1 = (-b + (sqrt((pow(b, 2)) - (4 * a * c)))) / (2 * a);
		root2 = (-b - (sqrt((pow(b, 2)) - (4 * a * c)))) / (2 * a);

		cout << "\n\ttwo real roots are: " << root2 << " and " << root1 << endl;
	}
}