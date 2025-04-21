#include "DS042.h"

MyLinkedStack::MyLinkedStack()
{
	stacktop = nullptr;
	size = 0;
}
MyLinkedStack::~MyLinkedStack()
{
	this->initialize();
}

void	MyLinkedStack::initialize()
{
	while (stacktop != nullptr)
	{
		Node	*tmp;
		tmp = stacktop;
		stacktop = stacktop->next;
		delete tmp;
		size--;
	}
}

bool	MyLinkedStack::isEmpty() const
{
	return (size == 0);
}

void	MyLinkedStack::push(const int &data)
{
	Node *nnode = new Node(data);
	nnode->next = stacktop;
	this->stacktop = nnode;
	size++;
}

void	MyLinkedStack::pop()
{
	Node	*tmp;

	if (this->isEmpty())
		return ;
	tmp = this->stacktop;
	this->stacktop = this->stacktop->next;
	delete tmp;
	size--;
}

int		MyLinkedStack::top() const
{
	return (this->stacktop->data);
}

int		MyLinkedStack::getNodeCnt() const
{
	return (this->size);;
}

void	MyLinkedStack::printAll()
{
	for (Node *tmp = this->stacktop; tmp != nullptr; tmp = tmp->next)
	{
		cout << tmp->data << ' ';
		if (tmp->next)
			cout << "-> ";
	}
	cout << "(" << size << " nodes)" << endl;
}
