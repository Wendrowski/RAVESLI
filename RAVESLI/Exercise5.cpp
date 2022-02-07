#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <utility>

using cattle = std::pair<int, bool>; // true - listed cow or bull, false - not listed

int get_int_user_input(int min, int max) {
	int input;
	while (!(std::cin >> input) || (input < min || input > max)) {
		std::cout << "Out of range, try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return input;
}

void convert_int_into_vector(std::vector<cattle>& vector, int number) {
	for (int iter{}, multiplier{ 1000 }; iter != vector.size(); ++iter, multiplier /= 10) {
		vector[iter].first = (number / multiplier) % 10;
	}
}

void new_cattle_list(std::vector<cattle>& needed_number) {
	for (int iter{}; iter != needed_number.size(); ++iter) {
		needed_number[iter].second = false;
	}
}

int seek_cows(std::vector<cattle>& needed_number_tmp, std::vector<cattle>& guess_array) {
	int cows{};
	for (int iter{}; iter != needed_number_tmp.size(); ++iter) {
		if (guess_array[iter].first == needed_number_tmp[iter].first) {
			cows++;
			needed_number_tmp[iter].second = true; // list this cow
			guess_array[iter].second = true; // list this cow
		}
	}
	return cows;
}

int seek_bulls(std::vector<cattle>& needed_number_tmp, const std::vector<cattle>& guess_array) {
	int bulls{};
	for (int iter_upper{}; iter_upper != needed_number_tmp.size(); ++iter_upper) {
		if (guess_array[iter_upper].second == false) { // if not listed as cow
			for (int iter_lower{}; iter_lower != needed_number_tmp.size(); ++iter_lower) {
				if (guess_array[iter_upper].first == needed_number_tmp[iter_lower].first) {
					if (needed_number_tmp[iter_lower].second == false) { // if it not listed as bull already
						++bulls;
						needed_number_tmp[iter_lower].second = true; // list this bull
						break;
					}
				}
			}
		}
	}
	return bulls;
}

int get_random_number(int min, int max) {
	static const double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0) };
	return static_cast<int>(rand() * fraction * (max - min + 1.0) + min);
}

int main(int argc, char* argv[]) {
	std::srand(static_cast<unsigned int>(std::time(0)));
	rand();

	std::cout << "Game: Cows and Buls\n";
	std::vector<cattle> needed_number{
		{get_random_number(1, 9), false},
		{get_random_number(0, 9), false},
		{get_random_number(0, 9), false},
		{get_random_number(0, 9), false} };

	int guess,
		cows,
		bulls;
	do {
		std::cout << "Enter your guess: ";
		guess = get_int_user_input(1000, 9999);
		std::vector<cattle> guess_vector(needed_number.size());
		convert_int_into_vector(guess_vector, guess);

		cows = seek_cows(needed_number, guess_vector);
		bulls = seek_bulls(needed_number, guess_vector);

		new_cattle_list(needed_number);
		std::cout << "Cows: " << cows << "\nBulls: " << bulls << '\n';
	} while (cows != 4);

	std::cout << "You won!\n";
	return 0;
}