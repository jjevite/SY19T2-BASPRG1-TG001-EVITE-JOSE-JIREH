#include <iostream>	
#include <string>

using namespace std;

void largestNumber()
{
	int numbers[10] = { -20, 0, 7, 3, 2, 1, 8, -3, 6, 3 };

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
		if (numbers[0] < numbers[i])
		{
			numbers[0] = numbers[i];
		}
	}

	cout << "The Largest Number is: " << numbers[0] << endl;
}

int main()
{
	largestNumber();
	system("pause");
	return 0;
}
