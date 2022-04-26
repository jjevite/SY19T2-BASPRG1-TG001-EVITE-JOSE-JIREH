#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));

	bool quit = false;

	int sum;
	for (int i = 1; i < 100; i++)
	{
		int diceOne = rand() % 6 + 1;
		int diceTwo = rand() % 6 + 1;
		cout << diceOne << ", " << diceTwo << endl;

		sum = diceOne + diceTwo;

		sum %= 4;
		if (sum == 0)
		{	
			cout << "You rolled " << i << " "
				<< "times" << endl;
			break;
		}
		system("pause");
	}
	system("pause");
	return 0;
}