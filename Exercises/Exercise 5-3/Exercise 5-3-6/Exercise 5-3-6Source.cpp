#include <iostream>	
#include <string>
#include <time.h>

using namespace std;

void randomElement()
{
	srand(time(0));
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };
	bool quitProgram = true;

	cout << "Input x or X to quit program" << endl;

	while (quitProgram)
	{
		int randomNumber = rand() % 7;
		cout << items[randomNumber] << endl;

		char userInput;
		cin >> userInput;
		if (userInput == 'x' || userInput == 'X')
		{
			quitProgram = false;
		}
	}
}

int main()
{
	randomElement();
	system("pause");
	return 0;
}
