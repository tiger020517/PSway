#include <iostream>
using namespace std;

string	findPrefix(string *lines, int size);
int	countWord(string str);
void	setlines(string *lines, string line, int size);
int	fsames(string *lines, int size, int idx);

int	main(void)
{
	int	size;
	string	line;
	string	*lines;
	string	prefix;

	getline(cin, line);
	size = countWord(line);
	if (size == 1)
		return (cout << "just one word", 0);
	lines = new string[size];
	setlines(lines, line, size);
	prefix = findPrefix(lines, size);
	cout << prefix << endl;
}


string	findPrefix(string *lines, int size)
{
	string	prefix;
	int	max;
	int	idx;
	int	sames;
	char	temp;
	int	sidx;

	idx = -1;
	max = 0;
	while (++idx < size)
		if (lines[idx].size() > lines[max].size()) max = idx;
	idx = -1;
	sames = 0;
	while (++idx < lines[max].size())
	{
		if (!fsames(lines, size, idx))
			break;
		sames++;
	}
	if (!sames)
		return (prefix = "?", prefix);
	prefix = lines[max].substr(0, sames);
	return (prefix);
}

int	fsames(string *lines, int size, int idx)
{
	int	temp;

	temp = -1;
	while (++temp < size)
	{
		if(lines[0][idx] != lines[temp][idx])
			return (0);
	}
	return (1);

}
void	setlines(string *lines, string line, int size)
{
	int	idx;
	int	lstart;
	int	lcount;
	int	sidx;

	idx = -1;
	sidx = 0;
	while (++idx < size)
	{
		lstart = sidx;
		while (line[sidx] != ' ' && line[sidx])
			sidx++;
		lcount = sidx - lstart;
		lines[idx] = line.substr(lstart, lcount);
		sidx++;
	}
}

int	countWord(string str)
{
	int	idx;
	int	wc;

	idx = -1;
	wc = 1;
	while (str[++idx])
		if (str[idx] == ' ') wc++;
	return (wc);
}
