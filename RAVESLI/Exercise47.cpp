#include <iostream>
#include <Windows.h>

using namespace std;

short int number()
{
    short int y = 3; // The quantity of user's attemps after those the zero is returned
    while (y > 0)
    {
        cout << "������� ����� �� 0 �� 255: ";
        short int x;
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "The data is incorrect! Tries left: " << --y << "\n";
        }
        else
        {
            cin.ignore(32767, '\n');
            if (x < 0 || x > 255)
                cout << "The value besides the boundaries of tries " << --y << "\n";
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
    cout << numb << " in binary system ";
    printBit(numb, 128, 8);
    return 0;
}