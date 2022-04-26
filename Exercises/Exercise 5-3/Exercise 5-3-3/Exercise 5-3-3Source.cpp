#include <iostream>	
#include <string>

using namespace std;

bool checkArrayElement(string userInput)
{
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };

	bool itemExist = false;
	for (int i = 0; i < 8; i++)
	{
		if (userInput == items[i]) itemExist = true;
		break;
	}
	return itemExist;
}

int main()
{
	string userInput;
	cout << "Input what item you need: ";
	cin >> userInput;

	bool itemExist = checkArrayElement(userInput);

	if (itemExist) cout << userInput << " exist" << endl;
	else cout << userInput << " doesn't exist" << endl;
	system("pause");
	return 0;
}