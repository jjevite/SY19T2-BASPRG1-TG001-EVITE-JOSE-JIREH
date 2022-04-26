#include <iostream>

using namespace std;

int main()
{
	int toBeeComputed;
	cout << "Input the number of values need to be averaged: ";
	cin >> toBeeComputed;

	int userValueInput;
	float averageValue = 0;

	for (int i = 0; i < toBeeComputed; i++)
	{
		cout << "Input value: " << endl;
		cin >> userValueInput;

		averageValue += userValueInput;
	}
	averageValue /= toBeeComputed;

	cout << "----------------------------------------" << endl;
	cout << "Average: " << averageValue << endl;

	system("pause");
	return 0;
}