#include <iostream>
using namespace std;

class Student
{
	private:
		double	getAvg() const;
	public:
		string	name;
		string	sid;
		int		*score;
		void	print() const;
	Student(string name, string sid, int *score)
	{
		this->name = name;
		this->sid = sid;
		this->score = new int[3];
		setScore(this->score, score);

	}
	~Student()
	{
		delete[] this->score;
	}
	void setScore(int *arr, int *origin)
	{
		int	idx;

		idx = -1;
		while (++idx < 3)
			arr[idx] = origin[idx];
	}
	void print()
	{
		cout << "[" << this->sid << "] " << this->name << endl;
		cout << "The Average score is ";
		cout << fixed;
		cout.precision(1);
		cout << getAvg() << endl;
	}
	double getAvg()
	{
		double out;

		out = 0;
		for (int i = 0; i < 3; i++)
			out += (double)this->score[i];
		out /= 3.0;
		return (out);
	}
};

int	main(void)
{
	string	iname;
	string	isid;
	int		*iscore;

	iscore = new int[3];
	cin >> isid >> iscore[0] >> iscore[1] >> iscore[2];
	cin.ignore(1);
	getline(cin, iname);
	Student student(iname, isid, iscore);
	student.print();
}