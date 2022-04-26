#include <iostream>


using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	cout << "Input movement (w,a,s,d) or press x to quit: ";
	char movement;
	cin >> movement;
	

	switch (movement)
	{
	case 'w':
	case 'W':
		cout << ++x << endl;
		break;
	case 'a':
	case 'A':
		cout << --y << endl;
		break;
	case 's':
	case 'S':
		cout << --x << endl;
		break;
	case 'd':
	case 'D':
		cout << ++y << endl;
		break;
	default:
		cout << "Invalid input" << endl;
		break;
	}

	system("pause");
	return 0;
}
