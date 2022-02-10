#include "stdafx.h"
#include <iostream>

bool isIcecreamSandwich(char* str) {
	int len = std::strlen(str);
	if (len < 3) return false;

	// �� �������� ������(���������)?
	bool center = false;
	char ch = str[0];

	for (int i = 0; i < (len / 2) + 1; ++i) {
		// ���� ������ �������� -- "�������" ���������
		if (str[i] != ch) {
			// ���� ������ �������� ��� �� ������ ��� -- � ��������� ��������� ���-�� ���. 
			// ��� �� �� ��� ��� ����
			if (center) return false;

			// �� �������� ���������
			center = true;

			ch = str[i];
		};

		// ���� ������� �� ����� � ������ ���� -- ��� �� ��, ��� ��� ����
		if (str[i] != str[len - 1 - i]) return false;
	}

	// ���� ���� ����������, � ����� �� ��������� -- ��������� ���. ��� �� ��, ��� ��� �����
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