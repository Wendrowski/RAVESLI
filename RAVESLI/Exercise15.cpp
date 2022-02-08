#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a smaller number: " << endl;
    int x;
    cin >> x;
    cout << "Enter a greater number: " << endl;
    int y;
    cin >> y;
    cout << "A smaller number is " << ((y > x) ? x : y) << endl;
    cout << "A greater number is " << ((y > x) ? y : x) << endl;
    system("pause");
    return 0;
}