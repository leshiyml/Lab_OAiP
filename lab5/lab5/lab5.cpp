#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;

double nameper(char a)
{
	cout << "Задайте " << a << " = ";

	double value;
	while (!(cin >> value))
	{
		cout << "Ошибка! Введите " << a << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}

int main()
{

	setlocale(LC_ALL, "Russian");

	int x;

	x = nameper('x');

	int a[0+x];


}