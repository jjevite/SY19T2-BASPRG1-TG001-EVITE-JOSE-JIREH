#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Declaration
	string name;
	string lastName;
	int age;
	int money;
	bool breakfast = true;

	// Inputs 
	cout << "Name :";
	cin >> name;
	cout << "Last Name :";
	cin >> lastName;
	cout << "Age :";
	cin >> age;
	cout << "How much money do you have?";
	cin >> money;
	cout << "Did you have breakfast today?";
	cin >> breakfast;

	// Space
	cout << " " << endl;

	// Outputs
	cout << "Name is" << name << endl;
	cout << "Last Name is" << lastName << endl;
	cout << "Age is" << age << endl;
	cout << "He/She has" << money << endl;
	cout << "Did you have breakfast today?" << breakfast << endl;

	system("pause");
	return 0;
}