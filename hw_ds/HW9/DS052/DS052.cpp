#include "MyCirque.h"

int main(void)
{
	int size;
	string str;

	cin >> size;
	cin.ignore();
	MyCirque Q(size);
	while (1)
	{
		getline(cin, str);
		if (str.substr(0, 2) == "en") {
			int x = stoi(str.substr(3));
			Q.enqueue(x);
		}
		else if (str.substr(0, 2) == "de") {
			Q.dequeue();
		}
		else if (str.substr(0, 2) == "fr") {
			cout << "=> " << Q.Front() << endl;
		}
		else if (str.substr(0, 2) == "re") {
			cout << "=> " << Q.Rear() << endl;
		}
		else if (str.substr(0, 2) == "si") {
			cout << "=> " << Q.Size() << endl;
		}
		else if (str.substr(0, 2) == "em") {
			cout << "=> " << Q.isEmpty() << endl;
		}
		else if (str.substr(0, 2) == "pr") {
			Q.display();
		}
		if (str.substr(0, 1) == "q") {
			break;
		}
	}
	cout << "bye!" << endl;
}