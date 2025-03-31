#include <iostream>
using namespace std;

struct Product
{
	string	name;
	int		price;
	string	company_name;
};

int	my_strcmp(string one, string two);

int	main(void)
{
	Product	*one;
	Product	*two;
	int		flag;

	one = new Product;
	two = new Product;
	cin >> one->name >> one->price >> one->company_name;
	cin >> two->name >> two->price >> two->company_name;
	if (my_strcmp(one->name, two->name))
		cout << one->name << " and " << two->name << " is not equal.";
	else
	{
		if (one->price != two->price)
			cout << one->name << " and " << two->name << " is not equal.";
		else
			cout << one->name << " is equal";
	}

}

int	my_strcmp(string one, string two)
{
	int	idx;

	idx = 0;
	while (one[idx] && two[idx])
	{
		if (tolower(one[idx]) != tolower(two[idx]))
			return (one[idx] - two[idx]);
		idx++;
	}
	return (one[idx] - two[idx]);
}
