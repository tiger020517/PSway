#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

#define	DATA "./data.txt" 

class Node
{
	public:
		int		data;
		Node	*next;
		Node(int data);
};

class MyLinkedStack
{
	private:
		int		size;
		Node	*stacktop;

	public:
		void	initialize();
		bool	isEmpty() const;
		void	push(const int&);
		void	pop();
		int		top() const;
		int		getNodeCnt() const;
		MyLinkedStack();
		~MyLinkedStack();
		void	printAll();
};