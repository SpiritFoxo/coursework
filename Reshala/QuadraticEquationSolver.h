#pragma once
#include <math.h>
using namespace System;

ref class QuadraticEquationSolver
{
public:
	array<String^>^ Solve(double a, double b, double c);
	double Function(double a, double b, double c, int x);
	double GetPeak(double a, double b);
	array<String^>^ SolveSelection(double precision, double a, double b, double c);
	
private:
	array<String^>^ FirstType(double a, double b, double d);
	array<String^>^ SecondType(double a, double b, double d);
	array<String^>^ ThirdType();
	double DiscriminantFinder(double a, double b, double c);
	double AltFunc(double a, double b, double c, double x);

};

