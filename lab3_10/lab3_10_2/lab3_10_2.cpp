#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, h, n, x, y, k, sum = 0.0, step = 0.0, fakt;

	cout << "Задайте a = ";
	while (!(cin >> a))
	{
		cout << "Ошибка! Введите a заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "Задайте b = ";
	while (!(cin >> b))
	{
		cout << "Ошибка! Введите b заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "Задайте h = ";
	while (!(cin >> h))
	{
		cout << "Ошибка! Введите h заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "Задайте n = ";
	while (!(cin >> n))
	{
		cout << "Ошибка! Введите n заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	for (x = a; x <= b; x += h)
	{
		double r = 1.0;
		sum = 1.0;

		y = (exp(x) + exp(-x)) / 2;
		
		for (k = 1; k < n; k++)
		{
			r = r * (x * x) / (2 * k * (2 * k - 1));

			sum += r;
		}

		cout << "Значение x = " << x << "     ";

		cout << "Значение Y(x) = " << y << "     ";

		cout << "Значение S(x) = " << sum << "     ";

		cout << "|Y(x)-S(x)| = " << fabs(y - sum) << "\n";

	}
}
