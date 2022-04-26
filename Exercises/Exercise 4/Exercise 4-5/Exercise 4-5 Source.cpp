#include <iostream>	
#include <string>

using namespace std;

int main()
{
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };
	int count = 0;

	string userInput;
	cout << "Input the item you need: ";
	cin >> userInput;

	for (int i = 0; i < 8; i++)
	{
		if (userInput == items[i])
		{
			count++;
		}
	}

	cout << "You have " << count << " " << userInput << endl;

	system("pause");
	return 0;
}