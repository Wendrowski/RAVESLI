#include <iostream>
#include <Windows.h> // ��� sleep

enum class Prompts { less = 1, guessed, more };

// �������� ��������� �� ������������:
Prompts getUserPrompt()
{
	std::cout << "���������� ���� �����:\n" << static_cast<unsigned short>(Prompts::less) << " - ������\n"
		<< static_cast<unsigned short>(Prompts::guessed) << " - �������\n"
		<< static_cast<unsigned short>(Prompts::more) << " - ������\n";
	unsigned prompt;
	std::cin >> prompt;
	while (std::cin.fail() || (prompt < static_cast<unsigned short>(Prompts::less)) || (prompt > static_cast<unsigned short>(Prompts::more)))
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "��� ����� ������ ���� �� " << static_cast<unsigned short>(Prompts::less) << " �� " << static_cast<unsigned short>(Prompts::more) << ": ";
		std::cin >> prompt;
	}
	return static_cast<Prompts>(prompt);
}

// ���� ���� � ����� ������:
void playGame()
{
	const unsigned minNumber{ 0 }; const unsigned maxNumber{ 100 };
	std::cout << "��������� ����� ����� �� " << minNumber << " �� " << maxNumber << ",\n ��������� ����� ��� ���������� � ����� �������...\n";
	Sleep(5000);                                    // ��� ������������ ����� ��������� ����� � ��������� �����

	int min{ minNumber }, max{ maxNumber },         // ���������� ��� ����������� ��������� �������
		attempt{ min + ((max - min) / 2) };    // ���������� ��� �����-�������
	unsigned tryCount{ 0 };                         // ������� �������
	bool guessed = false;
	while (!guessed)                                // ���� ��������� �� ������� �����
	{
		++tryCount;
		attempt = min + ((max - min) / 2);          // ���������� �����-������� ��� �������� ���������� ���������
		if ((min == max) || (attempt < min) || (attempt > max))
			break;                                  // ���� ������� ������������ �������, ��� ������������ ����������, ��������� �� �����
		std::cout << "\n��������� ������������, ��� ��� ����� " << attempt << std::endl;
		Sleep(1000);                                // ��� ������������ ����� �������� ���� ����
		switch (getUserPrompt())                    // �������� ��������� � ��������� � ����������� �� ��
		{
		case Prompts::less:
			max = attempt - 1;
			break;
		case Prompts::more:
			min = attempt + 1;
			break;
		default:
			guessed = true;
		}
	}
	if ((attempt < min) || (attempt > max))
		std::cout << "�� �������� ����� ��� ��������� ��������� ��������!\n";
	else
		std::cout << "����� �������� ����� " << attempt << ", ���������� ������������ " << tryCount << " �������/�������.\n";
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	playGame();
	return 0;
}