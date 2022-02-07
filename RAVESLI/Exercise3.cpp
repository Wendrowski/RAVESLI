#include <iostream>
#include <string>

std::string reverseStr(std::string& s) {
	std::string res(s.rbegin(), s.rend());
	return res;
}

int main() {
	std::string str;
	std::cout << "Enter string: ";
	std::getline(std::cin, str);
	std::cout << reverseStr(str);
	return 0;
}