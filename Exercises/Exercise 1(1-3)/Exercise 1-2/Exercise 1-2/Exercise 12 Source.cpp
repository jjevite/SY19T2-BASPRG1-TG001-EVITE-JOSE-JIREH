#include<iostream>
#include<string>

using namespace std;

int main()
{
	// Inputs Declaration
	int x;
	int y;

	// Inputs
	cout << "Input x :";
	cin >> x;
	cout << "Input y :";
	cin >> y;

	// Process
	int answerAddition = x + y;
	int answerSubtration = x - y;
	int answerMultiplication = x * y;
	int answerDivision = x / y;
	int answerModulo = x % y;

	// Outputs
	cout << x << "+" << y << "=" << answerAddition << endl;
	cout << x << "-" << y << "=" << answerSubtration << endl;
	cout << x << "*" << y << "=" << answerMultiplication << endl;
	cout << x << "/" << y << "=" << answerDivision << endl;
	cout << x << "%" << y << "=" << answerModulo << endl;

	system("pause");
	return 0;
}