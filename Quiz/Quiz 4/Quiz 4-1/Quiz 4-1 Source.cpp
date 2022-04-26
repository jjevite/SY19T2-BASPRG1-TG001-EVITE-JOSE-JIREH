#include <iostream>	
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int numbers[99];
	int numbersArraySize =99;
	int randomNumber = rand() % 100 + 1;
	int count = 1;

	for (int i = 0; i < numbersArraySize; i++)
	{
		if (count == randomNumber)
		{
			count++;
			continue;
		}
	
		numbers[i] = count;
		cout << numbers[i] << endl;
		count++;
		
	}

	count = 1;

	for (int i = 0; i < 99; i++)
	{
		if (numbers[i] != count)
		{
			cout << "The Missing Number is " << count << endl;
			break;
		}
		count++;
	}

	system("pause");
	return 0;
}