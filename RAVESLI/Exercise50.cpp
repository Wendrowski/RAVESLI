#include <iostream>
int getValueFromUser()
{
    std::cout << "Enter a number: " << std::endl;
    int x;
    std::cin >> x;
    return x * 2;
}

int main()
{
    std::cout << getValueFromUser() << std::endl;
    return 0;
}