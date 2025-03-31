#include <iostream>

using namespace std;

int	main(void)
{
	int	mon;
	int	day;
	int	days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int	idx;
	int	out;

	out = 0;
	cin >> mon >> day;
	idx = 0;
	while (++idx < mon)
		out += days[idx];
	out += day;
	cout << out;
}