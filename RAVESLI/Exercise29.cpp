#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void StringSandwich(const string& str, bool& result);

int main()
{
	//Установка кодировки ввод/вывод
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//---------------------

	cout << "Сэндвич с мороженым" << endl << endl;

	string characterString;
	bool result = false;
	char Repeat = 'n';
	do
	{
		cout << "\nВведите строку символов:\n";
		getline(cin, characterString);

		StringSandwich(characterString, result);

		if (result)
			cout << "Поздравляем! Ваша строка является сэндвичем! :)" << endl;
		else
			cout << "Ваша строка НЕ является сэндвичем!" << endl;

		cout << "\nПовторить? (y/n): ";
		cin >> Repeat;
		cin.ignore(4096, '\n');
	} while (Repeat == 'y');

	return 0;
}

void StringSandwich(const string& str, bool& result)
{
	size_t stringSize = str.size();					//Узнаем длину строки

	if (stringSize >= 3)
	{
		int countType = 1;								//Счетчик смены символов
		int charCountToLeft = 0, charCountToRight = 0;  //Счетчики символов слева и справа соответственно для сравнения
		char symbolLeft = '\0', symbolRight = '\0';		//Буфер символов слева и справа для сравнения

		for (size_t index = 0; index < stringSize; ++index)
		{
			if (countType == 1)							//Считаем сколько одинаковых символов слева
			{
				if (symbolLeft == 0)
				{
					++charCountToLeft;
					symbolLeft = str[index];
				}
				else if (str[index] == str[index - 1])
				{
					++charCountToLeft;
				}
				else
				{
					++countType;
				}
			}
			if (countType == 2)							//Пропускаем символы по середине убедившись что они одинаковые
			{
				if (str[index] != str[index + 1])
				{
					++countType;
				}
			}
			if (countType == 3)							//Считаем сколько одинаковых символов справа
			{
				if (charCountToRight == 0)
				{
					++charCountToRight;
					symbolRight = str[++index];
				}
				else
				{
					++charCountToRight;
				}
			}
		}

		if (countType == 3 && charCountToLeft == charCountToRight && symbolLeft == symbolRight) //Проверяем чтобы количество смены символов не превышало 3. Сравниваем количество символов слева и справа строки. Проверяем идентичность символов справа и слева строки.
			result = true;																		//
		else
			result = false;																		//
	}
	else
		result = false;																			//Присваивание результата переменной result по ссылке.
}