#include <iostream>

using namespace std;

int main()
{
	int userInput;
	cout << "Input a Value: ";
	cin >> userInput;

	for (int i = 0; i < userInput; i++)
	{
		cout << "*" << endl;
		cout << "**" << endl;
		cout << "***" << endl;
	}

	system("pause");
	return 0;
}