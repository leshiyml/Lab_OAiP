#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;

double nazvper(char a)
{
	double value;
	cout << "Задайте "<< a << " = ";
	while (!(cin >> value))
	{
		cout << "Ошибка! Введите " << a << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}


//double (int x)
//{
//	if (x == 1)
//	{
//		printf("привет");
//		return 1;
//	}
//	else
//	{
//		printf("иди на");
//		return 2;
//	}
//
//	return sin(x);
//}


int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, h, n, x, y, k, sum = 0.0, step = 0.0, fakt, i;

	a = nazvper('a');
	b = nazvper('b');
	h = nazvper('h');
	n = nazvper('n');

	/*double rez_a_b(double)
	{


	}

	for (x = a; x <= b; x += h)
	{
		double r = 1.0;
		sum = 1.0;
		y = 0;
		int i = 0;

		y = (exp(x) + exp(-x)) / 2;

		for (k = 1; k < n; k++)
		{
			i = i + 1;
			r = r * x / i;

			sum += r;
		}

		cout << "Значение x = " << x << "     ";

		cout << "Значение Y(x) = " << y << "     ";

		cout << "Значение S(x) = " << sum << "     ";

		cout << "|Y(x)-S(x)| = " << fabs(y - sum) << "\n";

	}*/
}
