#include <iostream>

int main()

{
    int x(1234);
    int y(5678);
    int z(90);

    if (x != y != z)
    {
        std::cout << x << " " << y << " " << z << std::endl;
    }
    else
    {
        std::cout << x << " = " << y << " = " << z << std::endl;
    }
    return 0;
}