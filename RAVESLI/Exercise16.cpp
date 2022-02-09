#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "¬ведите целое число X: ";
	cin >> x;
	cout << "¬аш X: " << x << endl;

	int y;
	cout << "¬ведите целое число Y которое больше X: ";
	cin >> y;
	if (y > x)
		cout << "¬аш Y: " << y << " More than X: " << x << endl;
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