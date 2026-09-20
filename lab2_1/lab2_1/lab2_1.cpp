#include <iostream>
#include <cmath>
#include <clocale>	
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, z, f, x, b, c, y;
	int choice;

	cout << "Введите число a = "; cin >> a;

	cout << "Введите числcло z, если z < 1 то x = z*z, если z >= 1 то x = z + 1:"; cin >> z;
	if (z < 1)
	{
		x = z * z;
	}
	else
	{
		x = z + 1;
	}

	cout << "Выберите ф-цию: 1 = 2x, 2 = x*x, 3 = x/3 = "; cin >> choice;

	switch(choice)
	{
		case 1: f = 2 * x; break;
		case 2: f = x * x; break;
		case 3: f = x / 3; break;
		default: cout << "Ошибка!"; return 0;
	}

	b = log(1 + pow(x, 1. / 5));

	c = cos(f + 1) * cos(f + 1);

	y = a * b * c;		

	cout << "Результат: " << y ;

}									 