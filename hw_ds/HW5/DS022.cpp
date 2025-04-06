#include <iostream>
using namespace std;

class Student
{
	public:
		string	name;
		int		LC;
		int		RC;
		void	print() const;
	Student(string name, int LC, int RC)
	{
		this->name = name;
		this->LC = LC;
		this->RC = RC;
	}
	void	print()
	{
		cout << "[" << this->name << "]" << endl;
		cout << "LC - " << this->LC << ((this->LC >= 350)? " Pass" : " Fail") << endl;
		cout << "RC - " << this->RC << ((this->RC >= 350)? " Pass" : " Fail") << endl;
		cout << "Total - " << (this->RC + this->LC) << endl;
	}
};

int		getLC();
int		getRC();

int		main(void)
{
	string	name;
	int		LC;
	int		RC;

	getline(cin, name);
	LC = getLC();
	RC = getRC();
	Student one(name, LC, RC);
	one.print();
}

int		getLC()
{
	int	score;

	do
	{
		cout << "LC> ";
		cin >> score;
	} while (score > 495 || score < 0);

	return (score);
}

int		getRC()
{
	int	score;

	do
	{
		cout << "RC> ";
		cin >> score;
	} while (score > 495 || score < 0);

	return (score);
}