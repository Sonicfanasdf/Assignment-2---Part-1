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

	void displayEquation() const;
	void getEvaluation() const;
	void numRoots() const;
	void getRoots() const;

};