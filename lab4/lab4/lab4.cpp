#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;

double nazvper(char a)
{
	cout << "Задайте "<< a << " = ";

	double value;
	while (!(cin >> value))
	{
		cout << "Ошибка! Введите " << a << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}


double calcY(double x) 
{

	return (exp(x) + exp(-x)) / 2;

}


double calcSUM(double x,int n)
{
	double r = 1.0;
	double sum = r;

	for (int k = 1; k < n; k++)
	{
		r = r * (x * x) / ((2 * k) * (2 * k - 1));

		sum += r;
	}

	return sum;

}


int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, h, n, x, Y, sum = 0.0, i = 0.0;

	a = nazvper('a');
	b = nazvper('b');
	h = nazvper('h');
	n = nazvper('n');

	for (x = a; x <= b; x += h)
	{

		Y = calcY(x);

		sum = calcSUM(x, n);

		cout << "Значение x = " << x << "     ";

		cout << "Значение Y(x) = " << Y << "     ";

		cout << "Значение S(x) = " << sum << "     ";

		cout << "|Y(x)-S(x)| = " << fabs(Y - sum) << "\n";

	}
}
