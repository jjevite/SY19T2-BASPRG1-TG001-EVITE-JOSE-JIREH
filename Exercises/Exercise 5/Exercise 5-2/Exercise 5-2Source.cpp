#include<iostream>
#include<string>

using namespace std;

float percentHP()
{
	int maximumHP;
	int currentHP;

	cout << "Input Maximum HP: ";
	cin >> maximumHP;

	cout << "Input Current HP :";
	cin >> currentHP;

	// Process
	float percent = (float)currentHP / (float)maximumHP;

	return percent;
}

int main()
{
	float finalPercent = percentHP();

	if (finalPercent == 1.0f)
	{
		cout << "HP is Full";
	}
	else if (finalPercent >= .5f && finalPercent <= .99f)
	{
		cout << "HP is Green(Healthy)";
	}
	else if (finalPercent <= .49f && finalPercent >= .21f)
	{
		cout << "HP is Yellow(Warning)";
	}
	else if (finalPercent <= .20f && finalPercent > .00f)
	{
		cout << "HP is Red(Critical)";
	}
	else if (finalPercent == 0.0f)
	{
		cout << "You are Dead";
	}

	finalPercent *= 100;

	cout << "HP at " << finalPercent << "%" << endl;


	system("pause");
	return 0;
}