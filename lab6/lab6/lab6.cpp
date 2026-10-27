#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;

int nameper(char a)
{
	cout << "Введите размер матрицы " << a << " = ";

	int value;
	while (true)
	{
		if ((cin >> value) && value > 0)
		{
			break;
		}

		cout << "Ошибка! Размер должен быть цифрой и больше нуля, введите " << a << " заново: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}

int elem(int i, int j)
{
	cout << "Элемент [" << i+1<< "] [" << j+1 << "]: ";

	int value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}

		cout << "Ошибка! Введите заново значение для элемента [" << i+1<< "] [" << j+1 << "]:";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return value;
}

bool symetrics(int** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] != matrix[n - 1 - j][n - 1 - i])
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{

	setlocale(LC_ALL, "Russian");

	unsigned int n, m;

	n = nameper('N');

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = elem(i, j);
		}
	}

	cout << "Наша матрица:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "  " << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	if (symetrics(matrix, n))
	{
		cout << "Матрица симметрична относительно побочной диагонали.\n";
	}
	else
	{
		cout << "Матрица не симметрична относительно побочной диагонали.\n";
	}

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
