#include <iostream>

using namespace std;

int main() {
	int massiveTwo[8] = {};
	cout << "Enter a number from 0 to 255: ";
	int number;
	cin >> number;
	int productBy2 = 1;
	int y = 0;
	for (int i = 0; i < 8; i++)
	{
		if (productBy2 * 2 < number)
		{
			productBy2 *= 2;
		}
		else
		{
			productBy2 = productBy2;
			break;
		}
	}

	while (productBy2 != 1)
	{
		if (number >= productBy2) {
			cout << "1";
			number -= productBy2;
		}
		else {
			cout << "0";
			number = number;
		}
		productBy2 = productBy2 / 2;
	}
	//Проверка еще 1 раз
	if (number >= productBy2) {
		cout << "1";
		number -= productBy2;
	}
	else {
		cout << "0";
		number = number;
	}
	return 0;
}