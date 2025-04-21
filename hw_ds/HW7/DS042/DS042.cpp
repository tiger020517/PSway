#include "DS042.h"

int	main(void)
{
	ifstream		file(DATA);
	string			line;
	MyLinkedStack	mstack;

	while (getline(file, line))
	{
		stringstream	ss(line);
		string			in;
		int				sum, sub1, sub2, ops;
		int				(* func)(int, int);
		int				flag = 0;
		cout << line << " ";
		sum = 0;
		ops = 0;
		do
		{
			ss >> in;
			if (in.at(0) == '#')		// 정수 입력시
			{
				in = in.substr(1);
				mstack.push(stoi(in));
			}
			else if (in == "+" || in == "-" || in == "*" || in == "/")	//연산자 입력시
			{
				if (in == "+")
					func = add;
				else if (in == "-")
					func = sub;
				else if (in == "*")
					func = mul;
				else
					func = divi;
				
				if (ops == 0) // 첫 계산 (숫자 두개 꺼내야됌)
				{
					if (mstack.isEmpty())
					{
						cout << endl << "=> Expression error !!!" << endl;
						continue ;
					}
					sub1 = mstack.top();
					mstack.pop();
					if (mstack.isEmpty())
					{
						cout << endl << "=> Expression error !!!" << endl;
						continue ;
					}
					sub2 = mstack.top();
					if ((in == "/") && (sub1 == 0))
					{
						cout << endl << "=> Division by 0" << endl;
						flag = 1;
						continue ;
					}
					mstack.pop();
					sum = func(sub2, sub1);
					ops++;
				}
				else	//첫 계산 이후, 한번만 pop 하면 됌
				{
					if (mstack.isEmpty())
					{
						cout << endl << "=> Expression error !!!" << endl;
						continue ;
					}
					sub1 = mstack.top();
					mstack.pop();
					if ((in == "/") && (sub1 == 0))
					{
						cout << endl << "=> Division by 0" << endl;
						flag = 1;
						continue ;
					}
					sum = func(sum, sub1);
				}
			}
			else if (in == "=") ;
			else
			{
				cout << endl << "=> Expression error !!!" << endl;
				mstack.pop();
				flag = 1;
				continue ;
			}
		} while (in != "=");
		if (!mstack.isEmpty())
		{
			cout << endl << "Too many operands !!!" << endl;
			mstack.initialize();
			continue ;
		}
		if (flag != 0)		//expression error
			continue ;
		cout << sum << endl;
	}
	
}

int	add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int divi(int a, int b)
{
	return (a / b);
}