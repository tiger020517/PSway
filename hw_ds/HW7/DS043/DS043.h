#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cctype>
using namespace std;

#define	DATA "./data.txt" 

class Node
{
	public:
		char	data;
		Node	*next;
		Node(char data);
};

class MyLinkedStack
{
	private:
		int		size;
		Node	*stacktop;

	public:
		void	initialize();
		bool	isEmpty() const;
		void	push(const char&);
		void	pop();
		char		top() const;
		int		getNodeCnt() const;
		MyLinkedStack();
		~MyLinkedStack();
		void	printAll();
};

