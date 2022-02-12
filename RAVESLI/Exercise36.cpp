#include <iostream>

int main()
{
    enum class Colors
    {
        PINK,
        GRAY
    };

    Colors color = Colors::GRAY;

    std::cout << color; // не будет работать, поскольку нет неявного преобразования в тип int
    std::cout << static_cast<int>(color); // результатом будет 1

    return 0;
}