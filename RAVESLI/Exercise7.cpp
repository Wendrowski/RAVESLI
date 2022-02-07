#include <iostream>
#include <Windows.h> // для sleep

enum class Prompts { less = 1, guessed, more };

// получаем подсказку от пользователя:
Prompts getUserPrompt()
{
	std::cout << "Задуманное Вами число:\n" << static_cast<unsigned short>(Prompts::less) << " - меньше\n"
		<< static_cast<unsigned short>(Prompts::guessed) << " - угадано\n"
		<< static_cast<unsigned short>(Prompts::more) << " - больше\n";
	unsigned prompt;
	std::cin >> prompt;
	while (std::cin.fail() || (prompt < static_cast<unsigned short>(Prompts::less)) || (prompt > static_cast<unsigned short>(Prompts::more)))
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Ваш ответ должен быть от " << static_cast<unsigned short>(Prompts::less) << " до " << static_cast<unsigned short>(Prompts::more) << ": ";
		std::cin >> prompt;
	}
	return static_cast<Prompts>(prompt);
}

// цикл игры с одним числом:
void playGame()
{
	const unsigned minNumber{ 0 }; const unsigned maxNumber{ 100 };
	std::cout << "Загадайте целое число от " << minNumber << " до " << maxNumber << ",\n компьютер будет его отгадывать с Вашей помощью...\n";
	Sleep(5000);                                    // даём пользователю время прочитать текст и придумать число

	int min{ minNumber }, max{ maxNumber },         // переменные для ограничений диапазона догадок
		attempt{ min + ((max - min) / 2) };    // переменная для числа-догадки
	unsigned tryCount{ 0 };                         // счётчик попыток
	bool guessed = false;
	while (!guessed)                                // пока компьютер не угадает число
	{
		++tryCount;
		attempt = min + ((max - min) / 2);          // генерируем число-догадку как середину возможного диапазона
		if ((min == max) || (attempt < min) || (attempt > max))
			break;                                  // если остаётся единственный вариант, или пользователь жульничает, подсказка не нужна
		std::cout << "\nКомпьютер предполагает, что это число " << attempt << std::endl;
		Sleep(1000);                                // даём пользователю время осознать этот факт
		switch (getUserPrompt())                    // получаем подсказку и действуем в зависимости от неё
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
		std::cout << "Вы загадали число вне диапазона возможных значений!\n";
	else
		std::cout << "Чтобы отгадать число " << attempt << ", компьютеру понадобилось " << tryCount << " попыток/попытки.\n";
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	playGame();
	return 0;
}