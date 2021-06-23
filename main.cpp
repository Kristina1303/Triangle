#include<iostream>
using namespace std;

int perimeter(int a, int b, int c)
{
	return a + b + c;
}

int area(int m, int n, int t)
{
	int p = perimeter(m, n, t) / 2;
	int S = sqrt(p * (p - m) * (p - n) * (p - t));
	return S;
}

int type(int x, int y, int z)
{
	if ((x * x + y * y) < z * z)
	{
		cout << "Triangle is obtuse\n";  // tapoagalen
		return 0;
	}
	if ((x * x + y * y) == z * z)
	{
		cout << "Triangle is rectangular\n"; // prawoagalen
		return 0;
	}
	if ((x * x + y * y) > z * z)
	{
		cout << "Triangle is acute\n"; // ostroagalen
		return 0;
	}
	return 0;
}


int menu()
{
	cout << "Options for triangle:\n";
	cout << "Press 0 - Exit!\n";
	cout << "Press 1 - Find type of triangle\n";
	cout << "Press 2 - Find permeter of triangle\n";
	cout << "Press 3 - Find area of triangle\n";
	return 0;
}
int main()
{
	int a, b, c;
	cout << "Please enter side a: ";
	cin >> a;
	cout << "Please enter side b: ";
	cin >> b;
    cout << "Please enter side c: ";
	cin >> c;
	while (a <= 0 or b <= 0 or c <= 0)
	{
		cout << "Please enter a new value, greater than 0\n";
		if (a <= 0) cin >> a;
		if (b <= 0) cin >> b;
		if (c <= 0) cin >> c;
	}
	if (((a + b) < c) or ((b + c) < a) or ((a + c) < b)
		or (abs(b - c) > a) or (abs(a - b) > c) or (abs(a - c) > b))
	{
		cout << "Triangle with these sides doesn' t exist!\n";
		return 0;
		
	}
	int P = 0, S = 0;
	P = perimeter(a, b, c);
	S = area(a, b, c);

	
	menu();
	int option;
	bool still = true;
	while (still)
	{
		cout << "Please choose an option for your triangle\n";
		cin >> option;

		while (option < 0 or option >3)
		{
			cout << "Invalid option for menu!\n";
			cout << "Please enter a new option: ";
			cin >> option;
		}
		if (option == 0)
		{
			cout << "Successfully exited the programm. Have an amazing day :)\n";
			still = false;
		}
		else if (option == 1)
		{
			type(a, b, c);
		}
		else if (option == 2)
		{
			cout << "Perimeter of triangle is: " << P << endl;
		}
		else if (option == 3)
		{
			cout << "Area of triangle is: " << S << endl;
		}
	}
	return 0;
}