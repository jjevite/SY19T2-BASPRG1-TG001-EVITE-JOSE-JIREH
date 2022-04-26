#include <iostream>

using namespace std;

int factorialProcess()
{
	int numberToBeeFactorial;
	cout << "Input a number to get its Factorial: ";
	cin >> numberToBeeFactorial;

	int finalValue = 1;

	for (numberToBeeFactorial; numberToBeeFactorial > 0; numberToBeeFactorial--)
	{
		finalValue *= numberToBeeFactorial;
	}
	return finalValue;
}

int main()
{
	int factorial = factorialProcess();


	cout << "_____________________________________________" << endl;
	cout << "The factorial of the value is: " << factorial << endl;
	
	system("pause");
	return 0;
}