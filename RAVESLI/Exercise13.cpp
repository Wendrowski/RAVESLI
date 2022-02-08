#include <iostream>

int func1(int x, int y)
{
    std::cout << "1";
    return x - y;
}

int func2(int x)
{
    std::cout << "0";
    return x;
}

int commonFunc(int x)
{
    x = (x >= 128) ? func1(x, 128) : func2(x);
    x = (x >= 64) ? func1(x, 64) : func2(x);
    x = (x >= 32) ? func1(x, 32) : func2(x);
    x = (x >= 16) ? func1(x, 16) : func2(x);
    std::cout << " ";
    x = (x >= 8) ? func1(x, 8) : func2(x);
    x = (x >= 4) ? func1(x, 4) : func2(x);
    x = (x >= 2) ? func1(x, 2) : func2(x);
    x = (x >= 1) ? func1(x, 1) : func2(x);
    std::cout << std::endl;
    return 0;
}
int main()
{
    std::cout << "Enter an integer value between 0 and 255: \n";
    int x;
    std::cin >> x;

    commonFunc(x);
    system("pause");
    return 0;
}