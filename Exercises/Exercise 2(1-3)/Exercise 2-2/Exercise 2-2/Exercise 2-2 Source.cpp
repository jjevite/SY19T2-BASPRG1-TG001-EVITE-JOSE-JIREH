#include<iostream>
#include<string>

using namespace std;

int main()
{
	int maximumHP = 250;
	int currentHP;

	cout << "Input Current HP :";
	cin >> currentHP;

	// Process
	float percent = (float)currentHP / maximumHP;
	cout << "Percent HP = " << (percent * 100) << "%" << endl;

	if (percent == 1.0f)
	{
		cout << "HP is Full";
	}
	else if (percent >= .5f && percent <= .99f)
	{
		cout << "HP is Green(Healthy)";
	}
	else if (percent <= .49f && percent >= .21f)
	{
		cout << "HP is Yellow(Warning)";
	}
	else if (percent <= .20f && percent >= .00f)
	{
		cout << "HP is Red(Critical)";
	}
	else if (percent == 0.0f)
	{
		cout << "You are Dead";
	}

	system("pause");
	return 0;
}