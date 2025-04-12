#include "CouponStack.h"


CouponStack::CouponStack(int size)
{
	maxsize = size;
	top = -1;
	list = new elem[maxsize];
}

CouponStack::~CouponStack()
{
	delete[] list;
}

void	CouponStack::initialize()
{
	top = -1;
}

bool	CouponStack::isEmpty()	const
{
	return (top == -1);
}

bool	CouponStack::isFull()	const
{
	return (top == maxsize - 1);
}

void	CouponStack::push(const elem& item)
{
	if (isFull())
	{
		cout << "Stack Overflow!" << endl;
		return;
	}
	list[++top] = item;
}

elem*	CouponStack::pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow!" << endl;
		return nullptr;
	}
	cout << list[top].rank << "등 - " << list[top].name << endl;
	return &list[top--];
}

void	CouponStack::print()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
		return;
	}
	
}

void	CouponStack::rprint()
{
	for (int i = top; i >= 0; i--)
		cout << list[i].rank << "등 - " << list[i].name << endl;
	this->initialize();
}