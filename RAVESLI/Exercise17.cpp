#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "������� �����: " << "\n";
    double number1; //���������� number1
    cin >> number1;
    cout << "������� ������� �����" << "\n";
    double number2; //���������� number2
    cin >> number2;
    if (number1 > number2)
    {
        double x = number1; //���������� �
        number1 = number2;
        number2 = x;
        cout << "������ �������� �������" << "\n";
    }//���������� � ������������

    cout << "������� �����: " << number1 << "\n";
    cout << "������� �����: " << number2 << "\n";

    return 0;
} //���������� number1, number2 ������������