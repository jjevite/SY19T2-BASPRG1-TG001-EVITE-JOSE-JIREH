#include<iostream>
#include<time.h>

using namespace std;


int main()
{
	srand(time(0));
	bool quit = true;
	int userMaximumDamage;
	int userMinimumDamage;
	int enemyMaximumDamage;
	int enemyMinimumDamage;
	int userHP;
	int enemyHP;

	// User Input
	cout << "Player Stats" << endl;
	cout << "Input User HP: ";
	cin >> userHP;
	cout << "Input User Maximum Damage: ";
	cin >> userMaximumDamage;
	cout << "Input User Minimum Damage: ";
	cin >> userMinimumDamage;

	// Space 
	cout << "                           " << endl;

	// Enemy Input
	cout << "Enemy Stats" << endl;
	cout << "Input Enemy HP: ";
	cin >> enemyHP;
	cout << "Input Enemy Maximum Damage: ";
	cin >> enemyMaximumDamage;
	cout << "Input Enemy Minimum Damage: ";
	cin >> enemyMinimumDamage;


	while (quit)
	{
		int userBaseDamage = (rand() % (userMaximumDamage - userMinimumDamage + 1)) + userMinimumDamage;
		int enemyBaseDamage = (rand() % (enemyMaximumDamage - enemyMinimumDamage + 1)) + enemyMinimumDamage;
		float userEndDamage;
		float enemyEndDamage;

		// Display for Attack Commands for User
		cout << "Press the following keys to defeat the enemy:" << endl;
		cout << "a to attack" << endl;
		cout << "d to defend" << endl;
		cout << "w to wild attack" << endl;
		
		// Input Attack Command for User
		char userAttack;
		cin >> userAttack;
		cout << "_______________________________________________" << endl;

		switch (userAttack)
		{
		case 'a':
		case 'A':
			cout << "User used Attack" << endl;
			break;
		case 'd':
		case 'D':
			cout << "User defended" << endl;
			break;
		case 'w':
		case 'W':
			cout << "User used Wild Attack" << endl;
			break;
		default:
			cout << "Invalid User input Please try again(a,d,w)" << endl;
		}

		// Enemy Attack Formula
		int enemyAttack = rand() % 3 + 1;
		switch (enemyAttack)
		{
		case 1:
			cout << "Enemy used Attack" << endl;
			break;
		case 2:
			cout << "Enemy defended" << endl;
			break;
		case 3:
			cout << "Enemy used Wild Attack" << endl;
			break;
		}

		// User Attack - Enemy Defend
		if (userAttack == 'a' && enemyAttack == 2)
		{
			userEndDamage = userBaseDamage * 0.5f;
			enemyEndDamage = 0;

		}
		else if (userAttack == 'A' && enemyAttack == 2)
		{
			userEndDamage = userBaseDamage * 0.5f;
			enemyEndDamage = 0;
		}

		// User Attack - Enemy Wild Attack
		else if (userAttack == 'a' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 1;
			enemyEndDamage = enemyBaseDamage * 2;
		}
		else if (userAttack == 'A' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 1;
			enemyEndDamage = enemyBaseDamage * 2;
		}

		// User Attack - Enemy Attack
		else if (userAttack == 'a' && enemyAttack == 1)
		{
			userEndDamage = userBaseDamage * 1;
			enemyEndDamage = enemyBaseDamage * 1;
		}
		else if (userAttack == 'A' && enemyAttack == 1)
		{
			userEndDamage = userBaseDamage * 1;
			enemyEndDamage = enemyBaseDamage * 1;
		}
		
		// User Defend - Enemy Wild Attack
		else if (userAttack == 'd' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = 0;
		}
		else if (userAttack == 'D' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = 0;
		}

		// User Defend - Enemy Defend
		else if (userAttack == 'd' && enemyAttack == 2)
		{
			userEndDamage = 0;
			enemyEndDamage = 0;
		}
		else if (userAttack == 'D' && enemyAttack == 2)
		{
			userEndDamage = 0;
			enemyEndDamage = 0;
		}

		// User Defend - Enemy Attack
		else if (userAttack == 'd' && enemyAttack == 1)
		{
			userEndDamage = 0;
			enemyEndDamage = enemyBaseDamage * .5f;
		}
		else if (userAttack == 'D' && enemyAttack == 1)
		{
			userEndDamage = 0;
			enemyEndDamage = enemyBaseDamage * .5f;
		}
		
		// User Wild Attack - Enemy Wild Attack
		else if (userAttack == 'w' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = enemyBaseDamage * 2;
		}
		else if (userAttack == 'W' && enemyAttack == 3)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = userBaseDamage * 2;
		}

		// User Wild Attack - Enemy Defend
		else if (userAttack == 'w' && enemyAttack == 2)
		{
			userEndDamage = 0;
			enemyEndDamage = enemyBaseDamage * 2;
		}
		else if (userAttack == 'W' && enemyAttack == 2)
		{
			userEndDamage = 0;
			enemyEndDamage = userBaseDamage * 2;
		}

		// User Wild Attack - Enemy Attack
		else if (userAttack == 'w' && enemyAttack == 1)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = enemyBaseDamage * 1;
		}
		else if (userAttack == 'W' && enemyAttack == 1)
		{
			userEndDamage = userBaseDamage * 2;
			enemyEndDamage = enemyBaseDamage *1;
		}
		// Damage Dealt 
		cout << "Player Dealt " << userEndDamage << endl;
		cout << "Enemy Dealt " << enemyEndDamage << endl;
		cout << "_______________________________________________" << endl;

		// HP Status
		userHP = userHP - enemyEndDamage;
		cout << "The User HP is : ";
		cout << userHP << endl;
		

		enemyHP = enemyHP - userEndDamage;
		cout << "The enemy HP is : ";
		cout << enemyHP << endl;
		cout << "_______________________________________________" << endl;
		

		if (userHP <= 0 && enemyHP <= 0)
		{
			cout << "Draw!" << endl;
			quit = false;
		}
		else if (enemyHP <= 0)
		{
			cout << "User Wins!" << endl;
			quit = false;
		}
		else if (userHP <= 0)
		{
			cout << "Enemy Wins!" << endl;
			quit = false;
		}
	}

	system("pause");
	return 0;
}