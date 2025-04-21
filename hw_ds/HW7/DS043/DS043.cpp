#include "DS043.h"

int	main(void)
{
	MyLinkedStack	*leftstack = new MyLinkedStack;
	MyLinkedStack	*rightstack = new MyLinkedStack;
	string			in;
	int				flag;
	while (1)
	{
		getline(cin, in);
		if (in == "q")
			break ;
		flag = 0;
		for (int i = 0; i < in.size(); i++)
		{
			if (in[i] == '<')
				flag = 0;
			else if (in[i] == '>')
				flag = 1;
			else
			{
				if (flag == 1)
					rightstack->push(in[i]);
				else
					leftstack->push(in[i]);
			}
		}
		cout << "=> ";
		while (!leftstack->isEmpty())
		{
			rightstack->push(leftstack->top());
			leftstack->pop();
		}
		while (!rightstack->isEmpty())
		{
			cout << rightstack->top();
			rightstack->pop();
		}
		cout << endl;
	}
}