#include <iostream>	
#include <string>

using namespace std;

int main()
{		
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };

	string userInput;
	cout << "Input what item you need: ";
	cin >> userInput;

	bool itemExist = false;
	for (int i = 0; i < 8; i++)
	{
		if (userInput == items[i]) itemExist = true;
		break;
	}

	if (itemExist) cout << userInput << " exist" << endl;
	else cout << userInput << " doesn't exist" << endl;
	
	system("pause");
	return 0;
}
