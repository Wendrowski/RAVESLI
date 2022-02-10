#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int x1, x2, x3, x4, x5;
	for (; ; ) {
		cout << "Введите первое число: ";
		cin >> x1;
		if (x1 < 0)
		{
			cout << "Нужно ввести положительное число!" << endl; continue;
		}
		cout << "Введите второе число: ";
		cin >> x2;
		if (x2 < 0)
		{
			cout << "Нужно ввести положительное число!" << endl; continue;
		}
		cout << "Введите третье число: ";
		cin >> x3;
		if (x3 < 0)
		{
			cout << "Нужно ввести положительное число!" << endl; continue;
		}
		cout << "Введите четвертое число: ";
		cin >> x4;
		if (x4 < 0)
		{
			cout << "Нужно ввести положительное число!" << endl; continue;
		}
		cout << "Введите пятое число: ";
		cin >> x5;
		if (x5 < 0)
		{
			cout << "Нужно ввести положительное число!" << endl; continue;
		}break;
	}
	cout << "Минимальное число из введённых: " << min(x1, min(x2, min(x3, min(x4, x5)))) << endl;
}