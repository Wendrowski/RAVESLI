#include<iostream>
using namespace std;                                // ���������� ������������ ��� std
int main()
{
	setlocale(LC_ALL, "rus");                        // ���������� ���������
	int x, y;
	cout << "������� ������� ����� : ";
	cin >> x;
	cout << "������� ������� ����� : ";
	cin >> y;
	if (x > y)
	{                                               // ������ ���������� �����
		int z;                                      // ��������� ���������� z �� ��������� �����
		z = x;
		x = y;
		y = z;
	}                                               // ����� ���������� �����, z ������������ �����
	cout << "������� ����� : " << y << endl;
	cout << "������� ����� : " << x << endl;
	system("pause");
	return 0;
}