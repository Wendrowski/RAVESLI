#include <iostream>

int main()
{
    enum class Colors
    {
        PINK,
        GRAY
    };

    Colors color = Colors::GRAY;

    std::cout << color; // �� ����� ��������, ��������� ��� �������� �������������� � ��� int
    std::cout << static_cast<int>(color); // ����������� ����� 1

    return 0;
}