#include "DS041.h"

int	main(void)
{
	string	in;
	string	arg1, arg2;
	MyLinkedStack	mstack;
	ifstream	file(DATA);

	while (!file.eof())
	{
		file >> arg1;
		if (arg1 == "push")
			file >> arg2;
		else
			arg2 = "";
		if (arg1 == "push")
			mstack.push(stoi(arg2));
		else if (arg1 == "pop")
		{
			if (mstack.isEmpty())
			{
				cout << "Stack is empty" << endl;
				continue ;
			}
			mstack.pop();
		}
			else if (arg1 == "top")
		{
			if (mstack.isEmpty())
			{
				cout << "Stack is empty" << endl;
				continue ;
			}
			cout << mstack.top() << endl;
		}
		else if (arg1 == "print")
		{
			if (mstack.isEmpty())
			{
				cout << "Stack is empty" << endl;
				continue ;
			}
			mstack.printAll();
		}
		else if (arg1 == "clear")
			mstack.initialize();
		else if (arg1 == "q")
			break ;
		else
			cout << "push ##\tstack에 새로운 Node를 생성하여 element 추가함\npop\t\t내용을 출력하지는 않음\ntop\t\t현재 stacktop에 있는 내용을 출력(pop하지는 않음)\nprint\t\t모든 element를 출력\nclear\t\t스택 초기화\nq\t\t종료" << endl;
	}
	cout << "Bye!" << endl;
	return (0);
}
