#include "MyCircularStringQueue.h"
#include <iostream>
using namespace std;

MyCircularStringQueue::MyCircularStringQueue(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new elem[size];					//Memory is allocated for the Queue in the HEAP
}

MyCircularStringQueue::~MyCircularStringQueue() {
    delete[] Q; // free the memory 
}

void MyCircularStringQueue::enqueue(elem x) {
	if (isFull()) { // check if the queue is full or not 
		cout << "=> Queue is Full!" << endl;
		return;
	}
	rear++; // increament the rear and then insert the value in the queue
	Q[rear % size] = x; // insertion of the element.
    
}

int MyCircularStringQueue::dequeue() { 
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "=> Queue is Empty!" << endl;
    }
	else
	{
		front++; // increment the front and take out the element 
		x = Q[front].gpa; // take out the element from the queue
	}
	return x; // return the deleted value 
}

int MyCircularStringQueue::isFull() { 
    if ((rear + 1) % size == front) {
        return 1;
    }
    return 0;
}

int MyCircularStringQueue::isEmpty() const{
    if (front == rear) {
        return 1;
    }
    return 0;
}

void MyCircularStringQueue::display() { 
	cout << "Highest GPA = " << Q[(front + 1) % size].gpa << endl;
    for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
        cout << Q[i].name << " " << Q[i].gpa;
		if (i != (rear + 1) % size - 1) {
			cout << endl;
		}
    }

    cout << endl;
}
double MyCircularStringQueue::Front() {
	if (isEmpty()) {
		cout << "=> Queue is Empty!" << endl;
		return (-1);
	}
	return (Q[(front + 1) % size].gpa);
}

double MyCircularStringQueue::Rear() {
	if (isEmpty()) {
		cout << "=> Queue is Empty!" << endl;
		return (-1);
	}
	return (Q[rear % size].gpa);
}

int MyCircularStringQueue::Size() const {
    if (isEmpty()) {
        return 0;
    }
    return (rear - front + size) % size;
}

void MyCircularStringQueue::printDetail() const {
	cout << "Size: " << Size() << endl;
	cout << "Queue: ";
	for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
		cout << "["<< Q[i].name << "]";
	}
	cout << endl;
	cout << "index: ";
	for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
		cout << " "<< (i + 1) % size << "  ";
	}
	cout << endl;
	cout << "front: " << (front + 1) % size << ", rear: " << (rear + 1) % size << endl;
	
}