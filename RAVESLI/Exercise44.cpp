#include <iostream>

int main()
{
    enum Fruits
    {
        LEMON,
        KIWI
    };

    enum Colors
    {
        PINK, 
        GRAY
    };

    Fruits fruit = LEMON; 
    Colors color = PINK; 

    if (fruit == color) 
        std::cout << "fruit and color are equal\n"; 
    else
        std::cout << "fruit and color are not equal\n";

    return 0;
}