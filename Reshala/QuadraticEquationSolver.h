#pragma once
#include <math.h>
using namespace System;

ref class QuadraticEquationSolver
{
public:
	QuadraticEquationSolver(double a, double b, double c);
	array<String^>^ Solve();
	double Function(double x);
	double GetPeak();
	array<String^>^ SolveSelection(double precision, double border, int len);
	
private:
	double a, b, c, d;
	array<String^>^ FirstType();
	array<String^>^ SecondType();
	array<String^>^ ThirdType();
	array<String^>^ FourthType();
	array<String^>^ FifthType();
	array<String^>^ SixthType();
	double DiscriminantFinder();

};

