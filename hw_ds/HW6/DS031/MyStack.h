#include <iostream>
using namespace std;

class	MyStack
{
	private:
		int		maxsize;
		int		top;
		int		*list;

	public:
		void	initialize();
		bool	isEmpty()		const;
		bool	isFull()		const;
		void	push(const int&);
		int		*pop();
		MyStack	(int = 10);
		~MyStack();
		void	print();
};