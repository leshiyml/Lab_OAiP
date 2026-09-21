#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

double nameper(char a)
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

int n = 0;

double calcSUM(double x)
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

void Out_Rez(double (*f1)(double), double (*f2)(double), double a, double b, double h)
{

	for (double x = a; x <= b; x += h)
	{

		double Y = f1(x);

		double sum = f2(x);

		cout << "Значение x = " << x << "     ";

		cout << "Значение Y(x) = " << Y << "     ";

		cout << "Значение S(x) = " << sum << "     ";

		cout << "|Y(x)-S(x)| = " << fabs(Y - sum) << "\n";

	}


}

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, h, x, Y, sum = 0.0, i = 0.0;

	a = nameper('a');
	b = nameper('b');
	h = nameper('h');
	n = (int)nameper('n');
	
	Out_Rez(calcY, calcSUM,a,b,h);
	
}
