#include<iostream>
#include<string>
#include <windows.h>

void Revers(std::string& str)
{
	str += " ";
	std::string revers = str;
	int j = 0;
	int i = 0;

	for (; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			int iterator = 0;
			for (; j <= i; )
			{

				revers[str.size() - i + iterator - 1] = str[j];
				j++;
				iterator++;
			}
		}
	}
	std::cout << revers;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;

	std::getline(std::cin, str);

	Revers(str);

	return 0;

}