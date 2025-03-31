#include <iostream>
using namespace std;

void	ltrim(string &str);
void	rtrim(string &str);

int	main(void)
{
	string	str;

	getline(cin, str);
	ltrim(str);
	rtrim(str);
	cout << str.size() - str.find_last_of("\t ") - 1;	
}

void	ltrim(string &str)
{
	int	start;

	start = str.find_first_not_of("\t ");
	str.erase(0, start);
}

void	rtrim(string &str)
{
	int	end;

	end = str.find_last_not_of("\t ");
	str.erase(end + 1, str.size() - (end + 1));
}
