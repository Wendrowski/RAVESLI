#include<iostream>
using namespace std;                                // используем пространство имён std
int main()
{
	setlocale(LC_ALL, "rus");                        // используем кириллицу
	int x, y;
	cout << "Введите меньшее число : ";
	cin >> x;
	cout << "Введите большее число : ";
	cin >> y;
	if (x > y)
	{                                               // начало вложенного блока
		int z;                                      // объявляем переменную z во вложенном блоке
		z = x;
		x = y;
		y = z;
	}                                               // конец вложенного блока, z уничтожается здесь
	cout << "большее число : " << y << endl;
	cout << "меньшее число : " << x << endl;
	system("pause");
	return 0;
}