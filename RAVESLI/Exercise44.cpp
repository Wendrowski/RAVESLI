#include <iostream>

int main()
{
    enum Fruits
    {
        LEMON, // LEMON ��������� ������ ��� �� ������� ���������, ��� � Fruits
        KIWI
    };

    enum Colors
    {
        PINK, // PINK ��������� ������ ��� �� ������� ���������, ��� � Colors
        GRAY
    };

    Fruits fruit = LEMON; // Fruits � LEMON �������� � ����� ������� ��������� (��������� ������� �� �����)
    Colors color = PINK; // Colors � PINK �������� � ����� ������� ��������� (��������� ������� �� �����)

    if (fruit == color) 
        std::cout << "fruit and color are equal\n"; 
    else
        std::cout << "fruit and color are not equal\n";

    return 0;
}