#include "MyStack.h"

int	main(void)
{
	MyStack		gpas(100);
	string		get;
	elem		tmp;
	ifstream	file(DATA);

	while (!file.eof())
	{
		if (!file.eof())
		{
			file >> get >> tmp.name;
			tmp.gpa = (double)(get[0] - '0');
			tmp.gpa += (get[2] - '0') / 10.0;
			if (gpas.isEmpty())
				gpas.push(tmp);
			else
			{
				if (gpas.getTop() < tmp.gpa)
				{
					gpas.initialize();
					gpas.push(tmp);
				}
				else if (gpas.getTop() == tmp.gpa)
					gpas.push(tmp);
			}
		}
		else
			break;
	}
	gpas.print();
	return (0);
}
