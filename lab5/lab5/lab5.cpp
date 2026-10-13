#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;

int nameper(char a)
{
	cout << "¬ведите количество элементов массива " << a << " = ";

	int value;
	while (!(cin >> value))
	{
		cout << "ќшибка! ¬ведите " << a << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}

int elem(int num)
{
	int value;
	cout << num << " число = ";

	while (!(cin >> value))
	{
		cout << "ќшибка! ¬ведите " << num  << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;

}

int main()
{

	setlocale(LC_ALL, "Russian");

	int n;
	int mass[100] = {0};

	n = nameper('n');

	cout << "¬ведите " << n << " целых чисел: \n";

	for (int i = 0; i < n; i++)
	{
		mass[i] = elem(i + 1);
	}

	int min = 0;

	for (int i = 1; i < n; i++)
	{
		if (abs(mass[i]) < abs(mass[min]))
		{
			min = i;
		}
	}

	int sum = 0;

	for (int i = min + 1; i < n; i++)
	{
		sum += abs(mass[i]);
	}

	cout << "\n»ндекс минимального значени€ элемента по модулю = " << min + 1 << " (значение: "<< mass[min] << ")\n";
	cout << "—умму модулей элементов массива, расположенных после минимального по модулю элемента = " << sum << "\n \n \n \n";

}