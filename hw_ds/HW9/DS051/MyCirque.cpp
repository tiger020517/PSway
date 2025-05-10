#include "MyCirque.h"
#include <iostream>
using namespace std;

MyCirque::MyCirque(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new int[size];					//Memory is allocated for the Queue in the HEAP
}

MyCirque::~MyCirque() {
    delete[] Q; // free the memory 
}

void MyCirque::enqueue(int x) {
	if (isFull()) { // check if the queue is full or not 
		cout << "=> Queue is Full!" << endl;
		return;
	}
	rear++; // increament the rear and then insert the value in the queue
	Q[rear % size] = x; // insertion of the element.
    
}

int MyCirque::dequeue() { 
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "=> Queue is Empty!" << endl;
    }
	else
	{
		front++; // increment the front and take out the element 
		x = Q[front];
	}
	return x; // return the deleted value 
}

int MyCirque::isFull() { 
    if ((rear + 1) % size == front) {
        return 1;
    }
    return 0;
}

int MyCirque::isEmpty() const{
    if (front == rear) {
        return 1;
    }
    return 0;
}

void MyCirque::display() { 
    cout << "Queue ("<< size << ") : ";
    for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
        cout << Q[i] << " | ";
    }

    cout << endl;
}
int MyCirque::Front() {
	if (isEmpty()) {
		cout << "=> Queue is Empty!" << endl;
		return (-1);
	}
	return (Q[(front + 1) % size]);
}

int MyCirque::Rear() {
	if (isEmpty()) {
		cout << "=> Queue is Empty!" << endl;
		return (-1);
	}
	return (Q[rear % size]);
}

int MyCirque::Size() const {
    if (isEmpty()) {
        return 0;
    }
    return (rear - front + size) % size;
}

void MyCirque::printDetail() const {
	cout << "Size: " << Size() << endl;
	cout << "Queue: ";
	for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
		cout << "["<< Q[i] << "]";
	}
	cout << endl;
	cout << "index: ";
	for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
		cout << " "<< (i + 1) % size << "  ";
	}
	cout << endl;
	cout << "front: " << (front + 1) % size << ", rear: " << (rear + 1) % size << endl;
	
}