#include <iostream>

using namespace std;

int main()
{
	int startingNumber;
	int numberOfProgression;
	int finalAnwser = 0;

	cout << "Arithmetic Progression Program" << endl;
	cout << "----------------------------------------" << endl;

	cout << "Input the starting value: ";
	cin >> startingNumber;
	cout << "Input the number of terms: ";
	cin >> numberOfProgression;

	for (startingNumber; startingNumber <= numberOfProgression; startingNumber++)
	{
		finalAnwser += startingNumber;
	}
	
	cout << "Sum is " << finalAnwser << endl;

	system("pause");
	return 0;
}