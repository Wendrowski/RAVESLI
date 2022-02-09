#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введите целое число X: ";
	cin >> x;
	cout << "Ваш X: " << x << endl;

	int y;
	cout << "Введите целое число Y которое больше X: ";
	cin >> y;
	if (y > x)
		cout << "Ваш Y: " << y << " Больше чем X: " << x << endl;
	else
	{
		cout << "Changing values vice versa" << endl;

		int a(y);
		cout << "X = " << a << endl;

		int b(x);
		cout << "Y = " << b << endl;
	}


	return 0;
}