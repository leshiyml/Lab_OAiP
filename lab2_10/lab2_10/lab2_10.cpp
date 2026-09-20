#include <iostream>
#include <cmath>
#include <clocale>	
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double d, z, f, x, b, c, y, a, v;
	int choice;

	cout << "Задайте d = ";
	while (!(cin >> d))
	{
		cout << "Ошибка! Введите d заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "Задайте c = ";
	while (!(cin >> c))
	{
		cout << "Ошибка! Введите c заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "Введите числcло z, если z < 1 то x = z*z, если z >= 1 то x = z + 1: ";
	while (!(cin >> z))
	{
		cout << "Ошибка! Введите z заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	if (z <= 1)
	{
		x = (z * z) + 1;
	}
	else
	{
		x = z -	 1;
	}

	cout << "Выберите ф-цию: 1 = 2x, 2 = x*x, 3 = x/3 = ";

	while (!(cin >> choice && choice<=3 && choice>=1))
	{
		cout << "Ошибка! Введите a заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	switch (choice)
	{
	case 1: f = 2 * x; break;
	case 2: f = x * x; break;
	case 3: f = x / 3; break;
	default: cout << "Ошибка!"; return 0;
	}

	a = f * exp(pow(sin(x), 3));

	b = log(x+1);

	v = sqrt(x);
	
	y = (d * a + c * b) / v;

	cout << "Результат: " << y << "\n \n";

}