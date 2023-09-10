#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class QuadraticExpression
{
private:
	int a, b, c, x;

public:

	// No argument constructor to initialize the values
	QuadraticExpression();
	// Argument constructor that sets the variables
	QuadraticExpression(int newA, int newB, int newC, int newX);

	// Accessor functions to get(view) the values of a, b, and c
	int getA() const;
	int getB() const;
	int getC() const;
	int getX() const;

	// Mutators to set the values
	void setA(int newA);
	void setB(int newB);
	void setC(int newC);
	void setX(int newX);

//Precondition: NA
//Postcondition: prints out quadratic equation
	void displayEquation() const;
//Precondition: NA
//Postcondition: prints out result of solved quadratic eqaution with the given x
	void getEvaluation() const;
//Precondition: NA
//Postcondition: prints out number of roots Quadratic equation has
	void numRoots() const;
//Precondition: NA
//Postcondition: calculates the roots of quadratic equation and prints
	void getRoots() const;

};