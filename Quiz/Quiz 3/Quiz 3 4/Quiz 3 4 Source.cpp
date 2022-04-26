#include <iostream>

using namespace std;

int main()
{
	int userInput;
	cout << "Input the number of Sequence you want: ";
	cin >> userInput;
	
	int startingNumber = 1;

	cout << startingNumber << " ";

	for (int i = 1; i < userInput; i++)
	{
		int last;
		int Answer = 0;
		if (i <= 1)
		{
			cout << startingNumber << " ";

			Answer = startingNumber + startingNumber;
			cout << Answer;
		}
		if (i >= 2)
		{
			last = Answer + startingNumber;
			cout << last;
		}
	}
	system("pause");
	return 0;
}