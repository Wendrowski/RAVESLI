#include <iostream>
#include <Windows.h>

using namespace std;

short int number()
{
    short int y = 3; // Количество попыток пользователя, по истечению которых функция возвращает 0
    while (y > 0)
    {
        cout << "Введите число от 0 до 255: ";
        short int x;
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Данные некорректны. Осталось попыток: " << --y << "\n";
        }
        else
        {
            cin.ignore(32767, '\n');
            if (x < 0 || x > 255)
                cout << "Значение за пределами. Осталось попыток: " << --y << "\n";
            else return x;
        }
    }
    return 0;
}

void printBit(short int num, short int pow, short int net)
{
    if (net == 4) 
        cout << " ";
    if (num >= pow && num > 0 && net > 0)
    {
        cout << "1";
        printBit(num - pow, pow / 2, net - 1);
    }
    else if (num > 0 && net > 0)
    {
        cout << "0";
        printBit(num, pow / 2, net - 1);
    }
    else if (num == 0 && net > 0)
    {
        cout << "0";
        printBit(num, pow, net - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    short int numb = number();
    cout << numb << " в двоичной системе ";
    printBit(numb, 128, 8); // 3 значения - от пользователя, множитель и значение количества выводимых знаков
    return 0;
}