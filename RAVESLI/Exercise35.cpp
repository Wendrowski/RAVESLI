#include "stdafx.h"
#include <iostream>
#include <string>

enum Animals {};  // прототип функции - предварительное объ€вление


int main()
{
	std::cout << "You are carrying a " << Animals(ANIMAL_PIG) << "\n";
	return 0;
}

enum Animals   // определение 
{
	ANIMAL_PIG = -4,
	ANIMAL_LION, // присвоено -3
	ANIMAL_CAT, // присвоено -2
	ANIMAL_HORSE = 6,
	ANIMAL_ZEBRA = 6, // имеет то же значение, что и ANIMAL_HORSE
	ANIMAL_COW // присвоено 7
};