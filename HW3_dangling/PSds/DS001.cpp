#include <iostream>

using namespace std;

int	main(void)
{
	int	height, weight;
	double	bmi;

	cin >> height >> weight;
	bmi = weight / ((height * height) / 10000);
	if (bmi >= 25)
		cout << "yes";
	else
		cout << "no";
}