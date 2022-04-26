#include <iostream>

using namespace std;

int main()
{
	cout << "Odd Number Sequence Program" << endl;

	int numberOfTerms;
	cout << "Give the number of terms: ";
	cin >> numberOfTerms;

	numberOfTerms *= 2;

	for (int i = 1; i <= numberOfTerms; i++)
	{
		cout << i << " ";

		if (i >= 0)
		{
			i += 1;
		}
	}

	

	system("pause");
	return 0;
}