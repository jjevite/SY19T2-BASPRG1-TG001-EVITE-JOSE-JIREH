#include<iostream>

using namespace std;

int main()
{
	float pie =  3.14f;
	int radius;
	cout << "Input Radius to get Area and Circumference: ";
	cin >> radius;

	float area = pie * (radius *radius);
	float circumference = 2 * pie * radius;

	cout << "Area = " << area << endl;
	cout << "Circumference = " << circumference << endl;

	system("pause");
	return 0;
}