#include "CouponStack.h"

int	main(void)
{
	int		size;
	string	arg;
	char	choose;

	cin >> size;
	cin.ignore(1, '\n');
	CouponStack MyCoupons(size);
	while (1)
	{
		getline(cin, arg);
		choose = arg[0];
		switch (choose)
		{
		case '+':
			couponIn(arg, MyCoupons);
			break;
		
		case '-':
			couponOut(MyCoupons);
			break;

		case 'q':
			return (0);
		}
	}
	return (1);
}

void	couponIn(string arg, CouponStack &MyStack)
{
	elem tmp;
	tmp.rank = stoi(arg.substr(2, 1));
	tmp.name = arg.substr(4, arg.size() - 4);
	MyStack.push(tmp);
}

void	couponOut(CouponStack &MyStack)
{
	MyStack.pop();
}