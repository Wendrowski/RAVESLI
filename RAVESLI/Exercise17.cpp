#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите число: " << "\n";
    double number1; //обьявление number1
    cin >> number1;
    cout << "Введите большее число" << "\n";
    double number2; //обьявление number2
    cin >> number2;
    if (number1 > number2)
    {
        double x = number1; //определяем х
        number1 = number2;
        number2 = x;
        cout << "Меняем значения местами" << "\n";
    }//переменная х уничтожается

    cout << "Меньшее число: " << number1 << "\n";
    cout << "Большее число: " << number2 << "\n";

    return 0;
} //переменные number1, number2 уничтожаются