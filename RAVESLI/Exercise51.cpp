#include <iostream>
int DoubleNumber()
{
	std::cout << "DN:";
	int x;
	std::cin >> x;
	return x * 2;
}
int main()
{
	std::cout << "DN*2=" << DoubleNumber();
	return 0;
}