#include<iostream>
using namespace std;                                
int main()
{
	setlocale(LC_ALL, "rus");        
	int x, y;
	cout << "������� ������� ����� : ";
	cin >> x;
	cout << "������� ������� ����� : ";
	cin >> y;
	if (x > y)
	{                                               
		int z;                                      
		z = x;
		x = y;
		y = z;
	}                                               
	cout << "������� ����� : " << y << endl;
	cout << "������� ����� : " << x << endl;
	system("pause");
	return 0;
}