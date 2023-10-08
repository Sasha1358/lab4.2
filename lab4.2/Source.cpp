// Lab_04_2.cpp
// < Якубенко Олександра>
// Лабораторна робота № 4.2
// . Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 28
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = (x * x) / (2.1 + sin(abs(x)));
		if (x <= -5)
			B = 1 / tan(exp(x));
		else
			if (x >= 0)
				B = log(abs(x)) - sqrt(pow(x, 2) / 2);
			else
				B = 2 - (x * x * x) / (abs(x) + 1);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}