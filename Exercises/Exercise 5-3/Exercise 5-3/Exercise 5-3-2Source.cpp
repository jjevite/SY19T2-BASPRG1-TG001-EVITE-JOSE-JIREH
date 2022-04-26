#include <iostream>	
#include <string>

using namespace std;

void addIntegers()
{
	int numbers1[] = { 1, 2, 3, 4, 5 };
	int numbers2[] = { 0, 7, -10, 5, 3 };
	int answer[6];

	for (int i = 0; i < 5; i++)
	{
		cout << numbers1[i] << " + " << numbers2[i] << " = ";
		answer[5] = numbers1[i] + numbers2[i];
		cout << answer[5] << endl;
	}
}

int main()
{
	addIntegers();

	system("pause");
	return 0;
}