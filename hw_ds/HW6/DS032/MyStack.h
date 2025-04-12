#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

#ifdef DATA
 #else
	#define DATA "datas2.txt"
#endif
struct elem
{
	string	name;
	double	gpa;
};

class	MyStack
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
		MyStack	(int = 10);
		~MyStack();
		void	print();
		double	getTop();
};