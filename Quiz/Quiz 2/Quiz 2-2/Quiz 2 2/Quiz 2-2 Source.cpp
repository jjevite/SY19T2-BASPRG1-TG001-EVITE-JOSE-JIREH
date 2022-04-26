#include <iostream>

using namespace std;

int main()
{
	int valueA;
	int valueB;
	int valueC;
	int valueD;
	int valueE;

	cout << "Input 5 numbers to get their sum and average: " << endl;
	cin >> valueA;
	cin >> valueB;
	cin >> valueC;
	cin >> valueD;
	cin >> valueE;
	
	int sum = valueA + valueB + valueC + valueD + valueE;
	float average = (float)sum / 5;

	cout << "The sum is : " << sum << endl;
	cout << "The average is :" << average << endl;

	system("pause");
	return 0;
}