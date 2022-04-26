#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	srand(time(0));

	int maximumDamage;
	int minimumDamage;

	cout << "Input Maximum Damage: ";
	cin >> maximumDamage;
	cout << "Input Minimum Damage: ";
	cin >> minimumDamage;

	int randomDamageUno = rand() % maximumDamage;


	int randomDamageDos = randomDamageUno  /  2;

	cout << "Random Damage: " << randomDamageDos;


	system("pause");
	return 0;
}