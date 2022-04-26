#include <iostream>	
#include <string>

using namespace std;

int numberOfInstances(string userInput)
{
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		if (userInput == items[i])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string userInput;
	cout << "Input the item you need: ";
	cin >> userInput;

	int count = numberOfInstances(userInput);

	cout << "You have " << count << " " << userInput << endl;

	system("pause");
	return 0;
}