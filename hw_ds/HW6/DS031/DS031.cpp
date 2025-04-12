#include "MyStack.h"

int	main(void)
{
	char	choose;
	string	arg;
	int		size;

	cin >> size;
	cin.ignore(1, '\n');
	MyStack Mstack(size);
	while (1)
	{
		getline(cin, arg);
		choose = arg[1];
		switch (choose)
		{
		case 'u':
			Mstack.push(stoi(arg.substr(5, arg.length() - 5)));
			break;
		
		case 'o':
			Mstack.pop();
			break;

		case 'r':
			Mstack.print();
			return (0);
			break;
		}
	}
	return (1);
}