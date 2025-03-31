#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int	main(void)
{
	double	x1, y1;
	double	x2, y2;
	double	lenght;

	cin >> x1 >> y1;
	cin.ignore(1000, '\n');
	cin >> x2 >> y2;
	lenght = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << fixed << setprecision(1) <<lenght;
}