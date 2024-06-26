﻿#pragma once
#include <math.h>
using namespace System;

ref class QuadraticEquationSolver
{
public:
	QuadraticEquationSolver(double a, double b, double c);//конструктор
	array<String^>^ Solve();//метод решения
	double Function(double x);//получить значение y в точке x
	double GetPeak();//получить вершину
	array<String^>^ SolveSelection(double precision, double border, int len);//решение методом подбора
	
private:
	double a, b, c, d;
	//6 методов решения для уравнений
	array<String^>^ FirstType();
	array<String^>^ SecondType();
	array<String^>^ ThirdType();
	array<String^>^ FourthType();
	array<String^>^ FifthType();
	array<String^>^ SixthType();
	
	//название говорит само за себя
	double DiscriminantFinder();

};

