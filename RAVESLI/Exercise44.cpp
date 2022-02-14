#include <iostream>

int main()
{
    enum Fruits
    {
        LEMON, // LEMON находится внутри той же области видимости, что и Fruits
        KIWI
    };

    enum Colors
    {
        PINK, // PINK находится внутри той же области видимости, что и Colors
        GRAY
    };

    Fruits fruit = LEMON; // Fruits и LEMON доступны в одной области видимости (добавлять префикс не нужно)
    Colors color = PINK; // Colors и PINK доступны в одной области видимости (добавлять префикс не нужно)

    if (fruit == color) 
        std::cout << "fruit and color are equal\n"; 
    else
        std::cout << "fruit and color are not equal\n";

    return 0;
}