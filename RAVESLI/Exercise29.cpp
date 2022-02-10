#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void StringSandwich(const string& str, bool& result);

int main()
{
	//��������� ��������� ����/�����
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//---------------------

	cout << "������� � ���������" << endl << endl;

	string characterString;
	bool result = false;
	char Repeat = 'n';
	do
	{
		cout << "\n������� ������ ��������:\n";
		getline(cin, characterString);

		StringSandwich(characterString, result);

		if (result)
			cout << "�����������! ���� ������ �������� ���������! :)" << endl;
		else
			cout << "���� ������ �� �������� ���������!" << endl;

		cout << "\n���������? (y/n): ";
		cin >> Repeat;
		cin.ignore(4096, '\n');
	} while (Repeat == 'y');

	return 0;
}

void StringSandwich(const string& str, bool& result)
{
	size_t stringSize = str.size();					//������ ����� ������

	if (stringSize >= 3)
	{
		int countType = 1;								//������� ����� ��������
		int charCountToLeft = 0, charCountToRight = 0;  //�������� �������� ����� � ������ �������������� ��� ���������
		char symbolLeft = '\0', symbolRight = '\0';		//����� �������� ����� � ������ ��� ���������

		for (size_t index = 0; index < stringSize; ++index)
		{
			if (countType == 1)							//������� ������� ���������� �������� �����
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
			if (countType == 2)							//���������� ������� �� �������� ���������� ��� ��� ����������
			{
				if (str[index] != str[index + 1])
				{
					++countType;
				}
			}
			if (countType == 3)							//������� ������� ���������� �������� ������
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

		if (countType == 3 && charCountToLeft == charCountToRight && symbolLeft == symbolRight) //��������� ����� ���������� ����� �������� �� ��������� 3. ���������� ���������� �������� ����� � ������ ������. ��������� ������������ �������� ������ � ����� ������.
			result = true;																		//
		else
			result = false;																		//
	}
	else
		result = false;																			//������������ ���������� ���������� result �� ������.
}