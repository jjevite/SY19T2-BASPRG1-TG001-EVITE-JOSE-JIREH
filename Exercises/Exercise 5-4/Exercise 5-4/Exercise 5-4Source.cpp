#include <iostream>	
#include <string>
#include <time.h>

using namespace std;

void randomFilling()
{


	for (int i = 0; i < 20; i++)
	{
		int randomNumbers[21];
		randomNumbers[i] = rand() % 100 + 1;
		cout << randomNumbers[i] << endl;
	}
}

int main()
{
	srand(time(0));

	randomFilling();

	system("pause");
	return 0;
}