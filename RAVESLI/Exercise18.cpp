#include<iostream>
using namespace std;                                
int main()
{
	setlocale(LC_ALL, "rus");        
	int x, y;
	cout << "¬ведите меньшее число : ";
	cin >> x;
	cout << "¬ведите большее число : ";
	cin >> y;
	if (x > y)
	{                                               
		int z;                                      
		z = x;
		x = y;
		y = z;
	}                                               
	cout << "большее число : " << y << endl;
	cout << "меньшее число : " << x << endl;
	system("pause");
	return 0;
}