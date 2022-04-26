#include <iostream>	
#include <string>

using namespace std;

int linearSearch(string userInput)
{
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };

	int index = -1;
	for (int i = 0; i < 8; i++)
	{
		if (userInput == items[i])
		{
			index = i;
			break;
		}
	}
	return index;
}

int main()
{
	string userInput;
	cout << "Input what item you need: ";
	cin >> userInput;

	int index = linearSearch(userInput);	

	if (index >= 0)	cout << userInput << " is found at index " << index << endl;
	else cout << userInput << " doesn't exist" << endl;
	system("pause");
	return 0;
}
