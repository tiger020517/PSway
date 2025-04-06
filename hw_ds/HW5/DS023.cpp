#include <iostream>
using namespace std;

class Product
{
	public:
		string	name;
		string	factory;
		int		price;
		int		discount;
		string	volume;
		Product	*next;

	Product()
	{
		this->name = "";
		this->factory = "";
		this->price = 0;
		this->discount = 0;
		this->volume = "";
		this->next = NULL;
	}

	void	getinfo()
	{
		getline(cin, this->name);
		cin >> this->price >> this->discount >> this->volume >> this->factory;
	}

	void	print()
	{
		cout << this->sellprice() << " ";
		cout << ((this->discount > 0) ? "(-" : "(");
		cout << this->discount << "%)";
		cout << '\t' << this->name << " " << this->volume << " " << this->factory << endl;
	}

	int		sellprice()
	{
		return ((int)((this->price * (100 - this->discount)) / 100));
	}
};

void	addProduct(Product *&pros, int &size, int &nowin);

int	main(void)
{
	Product	*pros;
	int		size;
	int		nowin;
	int		choose;

	pros = new Product[1];
	size = 1;
	nowin = 0;
	choose = 0;
	while (1)
	{
		cout << "1. Add 2.List 3.Quit > ";
		cin >> choose;
		cin.ignore(1, '\n');
		if (choose == 1)
			addProduct(pros, size, nowin);
		else if (choose == 2)
		{
			for (int i = 0; i < nowin; i++)
				pros[i].print();
		}
		else if (choose == 3)
			return (0);
		else
			cout << "wrong menu choose another one" << endl;

	}
}

void	addProduct(Product *&pros, int &size, int &nowin)
{
	Product	*tmp;

	if (size == nowin)
	{
		tmp = new Product[size];
		for (int i = 0; i < nowin; i++)
			tmp[i] = pros[i];
		size *= 2;
		delete[] pros;
		pros = new Product[size];
		for (int i = 0; i < nowin; i++)
			pros[i] = tmp[i];
		delete[] tmp;
	}
	pros[nowin].getinfo();
	nowin++;
}