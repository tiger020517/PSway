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
	cout << str;	
}

void	ltrim(string &str)
{
	//int	idx;
	int	start;

	//idx = -1;
	//start = 0;
	/*whlie (str[++idx])
	{
		if(str[idx] == ' ' || str[idx] == '\t')
			start++;
		else
			return break;
	}*/
	start = str.find_first_not_of("\t ");
	str.erase(0, start);
}

void	rtrim(string &str)
{
	int	end;

	end = str.find_last_not_of("\t ");
	str.erase(end + 1, str.size() - (end + 1));
}
