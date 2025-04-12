#include "MyStack.h"

MyStack::MyStack(int size)
{
	maxsize = size;
	top = -1;
	list = new int[maxsize];
}

MyStack::~MyStack()
{
	delete[] list;
}

void	MyStack::initialize()
{
	top = -1;
}

bool	MyStack::isEmpty()	const
{
	return (top == -1);
}

bool	MyStack::isFull()	const
{
	return (top == maxsize - 1);
}

void	MyStack::push(const int& item)
{
	if (isFull())
	{
		cout << "Stack Overflow!" << endl;
		return;
	}
	list[++top] = item;
}

int*	MyStack::pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow!" << endl;
		return nullptr;
	}
	return &list[top--];
}

void	MyStack::print()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
		return;
	}
	for (int i = top; i >= 0; --i)
		cout << list[i] << " ";
	cout << endl;
}