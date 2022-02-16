#include <iostream>

void decimicalIntoBinary(short int num, short int pow2)
{
	// проверяет нужно ли делать отступ 
	if (pow2 == 8)
		std::cout << ' ';

	
	if (pow2 <= num && num > 0)
	{
		std::cout << '1';
		decimicalIntoBinary(num - pow2, pow2 / 2);
	}
	else if (num > 0)
	{
		std::cout << '0';
		decimicalIntoBinary(num, pow2 / 2);
	}
	else if (num == 0)
		std::cout << "0000 0000";
}

int main()
{
	std::cout << "Enter a integer value in a range 0 to 255: ";
	short int num;
	std::cin >> num;

	decimicalIntoBinary(num, 128);

	return 0;
}