#include "stdafx.h"
#include <iostream>

bool isIcecreamSandwich(char* str) {
	int len = std::strlen(str);
	if (len < 3) return false;

	// мы достигли центра(мороженки)?
	bool center = false;
	char ch = str[0];

	for (int i = 0; i < (len / 2) + 1; ++i) {
		// если символ сменился -- "сэндвич" кончились
		if (str[i] != ch) {
			// если символ сменился уже не первый раз -- в мороженку подмешали что-то ещё. 
			// это не то что нам надо
			if (center) return false;

			// мы достигли мороженки
			center = true;

			ch = str[i];
		};

		// если символы не равны с разных краёв -- это не то, что нам надо
		if (str[i] != str[len - 1 - i]) return false;
	}

	// если цикл завершился, а центр не достигнут -- мороженки нет. это не то, что нам нужно
	return center;
}

void test() {
	std::cout << (isIcecreamSandwich("CDC") == true) << "\n";
	std::cout << (isIcecreamSandwich("hhhhhhhhmhhhhhhhh") == true) << "\n";

	std::cout << (isIcecreamSandwich("yyyyymmmmmmmmyyyyy") == true) << "\n";
	std::cout << (isIcecreamSandwich("3&&3") == true) << "\n";

	std::cout << (isIcecreamSandwich("AABBBAA") == true) << "\n";


	std::cout << (isIcecreamSandwich("A") == false) << "\n";
	std::cout << (isIcecreamSandwich("AA") == false) << "\n";
	std::cout << (isIcecreamSandwich("BBBBB") == false) << "\n";

	std::cout << (isIcecreamSandwich("AAABB") == false) << "\n";
	std::cout << (isIcecreamSandwich("AAACCCAA") == false) << "\n";
	std::cout << (isIcecreamSandwich("AACCCAAA") == false) << "\n";

	std::cout << (isIcecreamSandwich("AACDCAA") == false) << "\n";
	std::cout << (isIcecreamSandwich("AACDCDCAA") == false) << "\n";
	std::cout << (isIcecreamSandwich("AAKACDDDCKAAA") == false) << "\n";
}

int main() {
	test();
	return 0;
}