#include "MyCirque.h"

int	main(void)
{
	MyCirque Q(10);
	cout << "===== Dequeue x 1 =====" << endl;
	Q.dequeue();
	Q.printDetail();
	cout << "===== Enqueue x 7 (10 ~ 70) =====" << endl;
	for (int i = 10; i <= 70; i += 10) {
		Q.enqueue(i);
	}
	Q.printDetail();
	cout << "===== Dequeue x 3 =====" << endl;
	for (int i = 0; i < 3; i++) {
		Q.dequeue();
	}
	Q.printDetail();
	cout << "===== Enqueue x 6 (10 ~ 60) =====" << endl;
	for (int i = 10; i <= 60; i += 10) {
		Q.enqueue(i);
	}
	Q.printDetail();
}