#include <iostream>
#include <cmath>
using namespace std;
const double gravity{ 9.81 };
int inTime()
{
    static int s_sec = 0;
    return ++s_sec;
}
void inWay()
{
    int z = inTime();
    int inWay = (pow(z, 2)) * 5 * gravity / 2;
    cout << "in " << z << " seconds: the distance is " <<
        inWay << " meters from Earth " << endl;
}
int main()
{
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    inWay();
    return 0;
}