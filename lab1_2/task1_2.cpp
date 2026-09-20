#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double x, y, z, a, b, c, stepx, stepy, stepz;

	cout << "Задайте x = ";
	if (cin >> x) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	cout << "Задайте степень 10 на которую будет умножен x, stepx = ";
	if (cin >> stepx) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	cout << "Задайте y = ";
	if (cin >> y) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	cout << "Задайте степень 10 на которую будет умножен y, stepy = ";
	if (cin >> stepy) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	cout << "Задайте z = ";
	if (cin >> z) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	cout << "Задайте степень 10 на которую будет умножен z, stepz = ";
	if (cin >> stepz) {}
	else
	{
		cout << "Ошибка ввода. Перезапустите программу для повторного ввода";
		return 0;
	}
	x = x * pow(10, stepx);
	y = y * pow(10, stepy);
	z = z * pow(10, stepz);

	b = sqrt(x + pow(fabs(y), 1. / 4));
	c = pow((exp(x - 1 / sin(z))), 1. / 3);
	a = pow(2, -x) * b * c;

	cout << "Результат=" << a;
}