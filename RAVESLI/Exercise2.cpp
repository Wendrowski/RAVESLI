#include <iostream>
#include <string>
#include <cctype>

std::string revStr(std::string& s) {
	std::string res;
	int ind = s.length() - 1;
	while (!isalnum(s[ind])) { res += s[ind]; --ind; }
	int count = ind;
	for (int i = ind; i >= 0; --i) {
		if (s[i] == ' ') {
			count -= i;
			res += s.substr(i + 1, count) + ' ';
			count = i;
		}
	}
	res += s.substr(0, count);
	return res;
}

int main() {
	std::string str;
	std::cout << "Enter string of some words: ";
	std::getline(std::cin, str);
	std::cout << "Reverse this string is: " << revStr(str);
	return 0;
}