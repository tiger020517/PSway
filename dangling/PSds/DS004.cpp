#include <iostream>
#include <iomanip>
using namespace std;
struct st_score
{
	double	average;
	int		kor, eng, math;
	int		total;
};

int	main(void)
{
	st_score	newone;
	cin >> newone.kor >> newone.eng >> newone.math;
	newone.total = newone.kor + newone.eng + newone.math;
	newone.average = newone.total / 3.0;
	cout << newone.total << ' ' << fixed << setprecision(1) << newone.average << endl;
	cout << "Korean - ";
	if (newone.kor >= 70)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
	cout << "English - ";
	if (newone.eng >= 70)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
	cout << "Math - ";
	if (newone.math >= 70)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}