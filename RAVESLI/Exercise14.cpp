#include <iostream>

using namespace std;

int inNumber()
{
    cout << "Enter an integer from 0 to 255: ";
    int x;
    cin >> x;
    return x;
}
bool inBit(int y, int a)
{
    return (y >= a);
}
int diffNumber(int y, int a)
{
    return (y - a);
}
int main()
{
    int w1, w2, w3, w4, w5, w6, w7;
    int z = 128;
    int u = inNumber();
    if (inBit(u, z))
    {
        cout << "1";
        w1 = diffNumber(u, z);
    }
    else {
        cout << "0";
        w1 = u;
    }

    z = 64;
    if (inBit(w1, z))
    {
        cout << "1";
        w2 = diffNumber(w1, z);
    }
    else {
        cout << "0";
        w2 = w1;
    }

    z = 32;
    if (inBit(w2, z))
    {
        cout << "1";
        w3 = diffNumber(w2, z);
    }
    else {
        cout << "0";
        w3 = w2;
    }

    z = 16;
    if (inBit(w3, z))
    {
        cout << "1 ";
        w4 = diffNumber(w3, z);
    }
    else {
        cout << "0 ";
        w4 = w3;
    }

    z = 8;
    if (inBit(w4, z))
    {
        cout << "1";
        w5 = diffNumber(w4, z);
    }
    else {
        cout << "0";
        w5 = w4;
    }

    z = 4;
    if (inBit(w5, z))
    {
        cout << "1";
        w6 = diffNumber(w5, z);
    }
    else {
        cout << "0";
        w6 = w5;
    }

    z = 2;
    if (inBit(w6, z))
    {
        cout << "1";
        w7 = diffNumber(w6, z);
    }
    else {
        cout << "0";
        w7 = w6;
    }

    z = 1;
    if (inBit(w7, z))
    {
        cout << "1";
    }
    else {
        cout << "0";
    }

    return 0;
}