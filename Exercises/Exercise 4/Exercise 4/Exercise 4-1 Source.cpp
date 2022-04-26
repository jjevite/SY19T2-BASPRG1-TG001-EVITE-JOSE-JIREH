#include <iostream>	
#include <string>

using namespace std;

int main()
{
	string items[] = { "RedPotion", "BluePotion", "YggdrasilLeaf", "Elixir", "TeleportScroll", "RedPotion", "RedPotion", "Elixir" };

	for (int i = 0; i < 8; i++)
	{
		cout << items[i] << endl;
		system("pause");
	}
	return 0;
}
