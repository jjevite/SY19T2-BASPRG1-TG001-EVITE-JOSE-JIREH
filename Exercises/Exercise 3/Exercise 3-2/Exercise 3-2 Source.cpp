#include <iostream>

using namespace std;

int main()
{
	int numberToBeeFactorial;
	cout << "Input a number to get its Factorial: ";
	cin >> numberToBeeFactorial;

	int finalValue = 1;

	for (numberToBeeFactorial; numberToBeeFactorial > 0; numberToBeeFactorial--)
	{
		finalValue *= numberToBeeFactorial;
	}

	cout << "_____________________________________________" << endl;
	cout << "The factorial of the value is: " << finalValue << endl;

	system("pause");
	return 0;
}