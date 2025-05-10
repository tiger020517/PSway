#include "MyCircularStringQueue.h"

int main(void)
{
	MyCircularStringQueue gpas(100);
	string get;
	elem tmp;
	ifstream file(DATA);

	while (!file.eof())
	{
		if (!file.eof())
		{
			file >> get >> tmp.name;
			tmp.gpa = (double)(get[0] - '0');
			tmp.gpa += (get[2] - '0') / 10.0;
			if (gpas.isEmpty())
				gpas.enqueue(tmp);
			else
			{
				if (gpas.Front() < tmp.gpa)
				{
					while (!gpas.isEmpty())
						gpas.dequeue();
					gpas.enqueue(tmp);
				}
				else if (gpas.Front() == tmp.gpa)
					gpas.enqueue(tmp);
			}
		}
		else
			break;
	}
	gpas.display();
	return (0);
}