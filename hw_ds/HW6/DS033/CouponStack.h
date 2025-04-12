#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

struct elem
{
	string	name;
	int		rank;
};

class	CouponStack
{
	private:
		int		maxsize;
		int		top;
		elem	*list;

	public:
		void	initialize();
		bool	isEmpty()		const;
		bool	isFull()		const;
		void	push(const elem&);
		elem	*pop();
		CouponStack	(int = 10);
		~CouponStack();
		void	print();
		void	rprint();
};

void	couponIn(string arg, CouponStack &MyStack);
void	couponOut(CouponStack &MyStack);
