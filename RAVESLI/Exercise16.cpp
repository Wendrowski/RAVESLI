#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "������� ����� ����� X: ";
	cin >> x;
	cout << "��� X: " << x << endl;

	int y;
	cout << "������� ����� ����� Y ������� ������ X: ";
	cin >> y;
	if (y > x)
		cout << "��� Y: " << y << " ������ ��� X: " << x << endl;
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