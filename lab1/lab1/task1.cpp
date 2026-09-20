#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double x, y, z, a, b, c, stepx, stepy, stepz;

	cout << "Задайте x = ";
	while (!(cin >> x))
	{
		cout << "Ошибка! Введите x заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "Задайте степень 10 на которую будет умножен x, stepx = ";
	while (!(cin >> stepx))
	{
		cout << "Ошибка! Введите stepx заново: ";
		cin.clear();
		cin.ignore(1000, '\n');	
	}
	cout << "Задайте y = ";
	while (!(cin >> y))
	{
		cout << "Ошибка! Введите y заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "Задайте степень 10 на которую будет умножен y, stepy = ";
	while (!(cin >> stepy))
	{
		cout << "Ошибка! Введите stepy заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "Задайте z = ";
	while (!(cin >> z))
	{
		cout << "Ошибка! Введите z заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "Задайте степень 10 на которую будет умножен z, stepz = ";
	while (!(cin >> stepz))
	{
		cout << "Ошибка! Введите stepz заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	x = x * pow(10, stepx);
	y = y * pow(10, stepy);
	z = z * pow(10, stepz);

	b = sqrt(x + pow(fabs(y), 1. / 4));
	c = pow((exp(x - 1 / sin(z))), 1. / 3);
	a = pow(2, -x) * b * c;

	cout << "Результат=" << a;
}