#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Declaration
	int x;
	int y;
	

	// Input x and y
	cout << "Input x :";
	cin >> x;

	cout << "Input y :";
	cin >> y;

	if (x == y)
	{
		cout << x << "==" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << "==" << y << "=" << "0" << endl;
	}
	if (x != y)
	{
		cout << x << "!=" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << "!=" << y << "=" << "0" << endl;
	}
	if (x > y)
	{
		cout << x << ">" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << ">" << y << "=" << "0" << endl;
	}
	if (x < y)
	{
		cout << x << "<" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << "<" << y << "=" << "0" << endl;
	}
	if (x >= y)
	{
		cout << x << ">=" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << ">=" << y << "=" << "0" << endl;
	}
	if (x <= y)
	{
		cout << x << "<=" << y << "=" << "1" << endl;
	}
	else
	{
		cout << x << "<=" << y << "=" << "0" << endl;
	}

	system("pause");
	return 0;
}