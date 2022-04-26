#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Input
	float dollars;
	cout << "Input USD:";
	cin >> dollars;

	// Process
	const float exchangeRate = 50.95f;
	float php = dollars * exchangeRate;

	// Output 
	cout << "PHP:" << php << endl;

	system("pause");
	return 0;
}