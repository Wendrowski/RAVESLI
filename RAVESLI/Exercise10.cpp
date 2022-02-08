#include <iostream>

int ans1(short entValue, short c)
{
    do
    {
        if (entValue >= c)
        {
            entValue -= c;
            std::cout << 1;
        }
        else
        {
            std::cout << 0;
        }
        c /= 2;
        if (c == 8)
            std::cout << " ";
    } while (c != 1);

    if (entValue == c)
        std::cout << 1;
    else
        std::cout << 0;
    std::cout << std::endl;
    return 0;
}

int main()
{
    std::cout << "Value 0 to 255: ";
    short entValue;
    std::cin >> entValue;

    short c{ 128 };
    if (entValue >= 0 && entValue <= 255)
    {
        std::cout << "The answer is: ";
        ans1(entValue, c);
    }
    else
        std::cout << "Wrong Value" << std::endl;

    return 0;
}