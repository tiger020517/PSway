#include <iostream>
using namespace std;

struct Menu
{
	string	m_name;
	int		price;
};

struct Cafe
{
	string	c_name;
	int		menus;
	Menu	*mlist;
};

void	addCafe(Cafe &r1);
void	addMenu(Menu &m1);
void	displayMenus(Cafe &r1);

int	main(void)
{
	Cafe	myCafe;
	int	idx;

	addCafe(myCafe);
	displayMenus(myCafe);
	delete[] myCafe.mlist;
}
void	addCafe(Cafe &r1)
{	
	int	in;
	int	idx;

	getline(cin, r1.c_name);
	cin >> in;
	r1.menus = in;
	r1.mlist = new Menu[in];
	idx = -1;	
	while (++idx < in)
		addMenu(r1.mlist[idx]);
}

void	addMenu(Menu &m1)
{
	cin >> m1.m_name;
	cin >> m1.price;
}

void	displayMenus(Cafe &r1)
{
	int	idx;

	cout << "===== " << r1.c_name << " =====" << endl;
	idx = -1;
	while (++idx < r1.menus)
		cout << r1.mlist[idx].m_name << " " << r1.mlist[idx].price << endl;
	cout << "==================" << endl;
}
