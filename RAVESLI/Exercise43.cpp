#include "stdafx.h"
#include <iostream>
#include <string>

enum Animals {};  // �������� ������� - ��������������� ����������


int main()
{
	std::cout << "You are carrying a " << Animals(ANIMAL_PIG) << "\n";
	return 0;
}

enum Animals   // ����������� 
{
	ANIMAL_PIG = -4,
	ANIMAL_LION, // ��������� -3
	ANIMAL_CAT, // ��������� -2
	ANIMAL_HORSE = 6,
	ANIMAL_ZEBRA = 6, // ����� �� �� ��������, ��� � ANIMAL_HORSE
	ANIMAL_COW // ��������� 7
};