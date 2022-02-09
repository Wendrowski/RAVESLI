#include <iostream>
#include <cmath>

using namespace std;

long long int getNumber();
long long int printBit(long long int x, long long int pow);
long long int powNumber(long long int x);

int main()
{
	long long int x;
	x = getNumber();
	long long int n = powNumber(x);



	while ((n + 1) % 4 != 0) {
		n++;
	}
	
	for (long long int i = n; i > -1; i--) {

		if (((i + 1) % 4 == 0) && (i != 0))
			cout << " ";
		x = printBit(x, static_cast<long long int>(pow(2, i)));
	}

	cout << endl;
	return 0;
}

// entering a number
long long int  getNumber() {
	cout << "Enter a number : ";
	long long int x;
	cin >> x;
	return x;
}


long long int printBit(long long int x, long long int pow) {

	if (x >= pow)
	{
		cout << "1";
		return x - pow;
	}
	else {
		cout << "0";
		return x;
	}
}


long long int powNumber(long long int x) {

	long long int n{ 0 };
	double y = pow(2, n);
	while (x > y)
	{
		++n;
		y = pow(2, n);
	}
	--n;
	return n;
}