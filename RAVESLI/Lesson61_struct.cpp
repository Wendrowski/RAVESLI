/*std::string myName;
int myBirthday;
int myBirthMonth;
int myBirthYear;
int myHeight;
int myWeight;

struct Employee
{
	short id;
	int age;
	double salary;
};

Employee john;
Employee james;

Employee john;
john.id = 8;
john.age = 27;
john.salary = 32.17;

james.id = 9;
james.age = 30;
james.salary = 28.35;



int totalAge = john.age + james.age;
if (john.salary > james.salary)
	cout << "John makes more than James"\n;
else if (john.salary < james.salary)
	cout << "John makes less that James"\n;
else 
	cout << "John and James make the sam amount"\n;

james.salary += 3.75; //James got a promotion at Work;

++john.age; // John's Birthday;

struct Employee
{
	short id;
	int age;
	double salary;
};

Employee john = { 5, 27, 45000.0 };
Employee james = { 6, 29 }; // james.salary = 0.0 - default initialization;

Employee john{ 5, 27, 45000.0 };
Employee james{ 6, 29 }; //uniform initialization for C++11 and higher;

struct Triangle { double length = 2.0; double width = 2.0 };

int main() 
{
	Triangle z;  length = width = 2.0;  z.length = 3.0 // можно присваивать другие значения членам
}

//Передача структуры в функцию

#include <iostream>

struct Employee
{
	short id;
	int age;
	double salary;
};

void printInformation(Employee employee)
{
	std::cout << "ID = " << employee.id << '\n';
	std::cout << "Age = " << employee.age << '\n';
	std::cout << "Salary = " << employee.salary << '\n';
}

int main()
{
	Employee john{ 1, 30, 30000.0 };
	Employee james{ 2, 40, 40000.0 };

	printInformation(john);
	std::cout << '\n';

	printInformation(james);

	return 0;

}

#include <iostream>

struct Employee
{
	short id;
	int age;
	double salary;
};

int main()
{
	std::cout << "The size of Employee is " << sizeof(Employee) << '\n';
	return 0;
}



#include <iostream>
#include <string>


struct Advertising
{
	int adsShown;
	double perVisitors;
	double avWagePerClick;
};
void funcAdv(Advertising ad)
{
	using namespace std;
	cout << "Enter the number of ads shown" << ad.adsShown << endl;
	cout << "Enter the percentage of visitors" << ad.perVisitors << endl;
	cout << "Enter the average wage per click" << ad.avWagePerClick << endl;

	cout << "Total Earnings " << (ad.adsShown * ad.perVisitors / 100 * ad.avWagePerClick) << endl;
}
int main()
{
	using namespace std;
	Advertising ad;

	cout << "How many ads were shown today? ";
	cin >> ad.adsShown;
	cout << "What percentage of users clicked on the ads? ";
	cin >> ad.perVisitors;
	cout << "What was the average earnings per click? ";
	cin >> ad.avWagePerClick;

	printAdvertising(ad);
	return 0;
}

#include <iostream>

struct fractionStorage
{
	int Numerator;
	int Denominator;
};

using namespace std;
double x, y;
cout << "Enter x" << endl;
cin >> x;
cout << "Enter y" << endl;
cin >> y;

void multiply(x, y)
{
	сout << x * y << endl;
}*/




















