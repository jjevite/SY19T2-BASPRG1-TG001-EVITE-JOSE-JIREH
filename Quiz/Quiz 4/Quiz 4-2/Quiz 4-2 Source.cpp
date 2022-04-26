#include <iostream>	
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int numbers[20];
	int numbersArraySize = 20;
	int count = 1;
	int firstLargeNumber;
	int secondLargeNumber;
	bool duplucateNumber = false;

	for (int i = 0; i < numbersArraySize; i++)
	{
		numbers[i] = rand() % 100 + 1;;
		cout << count << ". " << numbers[i] << endl;
		count++;
	}

	// First Largest Number
	firstLargeNumber = numbers[0];
	for (int i = 0; i < numbersArraySize; i++)
	{
		if (firstLargeNumber < numbers[i])
		{
			firstLargeNumber = numbers[i];
		}
	}
	cout << "The first largest number is: " << firstLargeNumber << endl;

	// Second Largest Number
	secondLargeNumber = numbers[0];
	for (int i = 0; i < numbersArraySize; i++)
	{
		if (numbers[i] < firstLargeNumber)
		{
			if(numbers[i] > secondLargeNumber)
			secondLargeNumber = numbers[i];
		}
	}
	cout << "The second largest number is: " << secondLargeNumber << endl;

	// Duplicate Number
	for (int i = 0; i < numbersArraySize; i++)
	{
		if (numbers[1] == numbers[i])
		{
			duplucateNumber = true;
			break;
		}
		numbers[1] = numbers[i];
	}
	if (duplucateNumber) cout << "The array contains duplicate numbers" << endl;
	else cout << "The array doesn't contain any duplicate numbers" << endl;


	system("pause");
	return 0;
}