#include "QuadraticEquationSolver.h"


double QuadraticEquationSolver::DiscriminantFinder(double a, double b, double c)
{
	double d;
	d = pow(b, 2) - 4 * a * c;
	return d;
}


array<String^>^ QuadraticEquationSolver::FirstType(double a, double b, double d)
{
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = Convert::ToString((-1 * b + sqrt(d)) / (2 * a));
	roots[1] = Convert::ToString((-1 * b - sqrt(d)) / (2 * a));
	roots[2] = "(" + Convert::ToString(-1 * b) + " + sqrt(" + Convert::ToString(d) + ")) / " + Convert::ToString(2 * a);
	roots[3] = "(" + Convert::ToString(-1 * b) + " - sqrt(" + Convert::ToString(d) + ")) / " + Convert::ToString(2 * a);
	return roots;
}


array<String^>^ QuadraticEquationSolver::SecondType(double a, double b, double d)
{
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = Convert::ToString((-1 * b) / (2 * a));
	roots[1] = "";
	roots[2] = Convert::ToString(-1 * b) + "/" + Convert::ToString(2 * a);
	roots[3] = "";
	return roots;
}

array<String^>^ QuadraticEquationSolver::ThirdType() {
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = "Уравнение верно при любом x";
	roots[1] = "";
	roots[2] = "Уравнение верно при любом x";
	roots[3] = "";
	return roots;
}



array<String^>^ QuadraticEquationSolver::Solve(double a, double b, double c)
{
	double d;
	d = DiscriminantFinder(a, b, c);
	array<String^>^ roots = gcnew array<String^>(4);

	if (a != 0) {

		if (d > 0) {
			roots = FirstType(a, b, d);
		}
		if (d == 0) {
			roots = SecondType(a, b, d);
		}
		if (d < 0) {
			roots[0] = "Корней нет";
			roots[1] = "Корней нет";
			roots[2] = "Корней нет";
			roots[3] = "Корней нет";
		}

		return roots;
	}

	if (a == 0 && b == 0 && c == 0) {
		roots = ThirdType();
		return roots;
	}

	if ((a == 0 || b == 0) && c == 0) {
		roots[0] = "0";
		roots[1] = "";
		roots[2] = "0";
		roots[3] = "";
		return roots;
	}

	if ((a == 0 && b == 0) && c != 0) {
		roots[0] = "Уравнение неверно";
		roots[1] = "";
		roots[2] = "Уравнение неверно";
		roots[3] = "";
		return roots;
	}

	if (a == 0 && b != 0 && c != 0) {
		roots[0] = Convert::ToString((-1 * c) / b);
		roots[1] = "";
		roots[2] = Convert::ToString(-1 * c) + "/" + Convert::ToString(b);
		roots[3] = "";
		return roots;
	}

}

double QuadraticEquationSolver::Function(double a, double b, double c, int x)
{
	double y;
	y = a * pow(x, 2) + b * x + c;
	return y;
}

double QuadraticEquationSolver::AltFunc(double a, double b, double c, double x) {
	double y;
	y = a * pow(x, 2) + b * x + c;
	return y;
}


double QuadraticEquationSolver::GetPeak(double a, double b)
{
	return ((-1 * b) / (2 * a));
}

array<String^>^ QuadraticEquationSolver::SolveSelection(double precision, double a, double b, double c) {

	double Peak = GetPeak(a, b);
	array<String^>^ roots = gcnew array<String^>(2);
	if (DiscriminantFinder(a, b, c) >= 0) {
		while (true)
		{
			if (((AltFunc(a, b, c, Peak) <= 0) && (AltFunc(a, b, c, Peak + precision) > 0)) || ((AltFunc(a, b, c, Peak) >= 0) && (AltFunc(a, b, c, Peak + precision) < 0))) {
				break;
			}
			else
			{
				Peak = Peak + precision;
			}
		}
	}

	roots[0] = Convert::ToString(Peak);
	roots[1] = Convert::ToString(Peak + precision);

	return roots;
}