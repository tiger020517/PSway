#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

#define DATA "data.txt"
struct elem
{
	string	name;
	double	gpa;
};

class MyCircularStringQueue {
private: 
	int front;  // front is used for deletion 
	int rear;   // rear is used for insertion
	int size;   // size of the queue 
	elem* Q;     // dynamically allocated space for queue 
public:
    MyCircularStringQueue(int size);    // constructor to make the Queue with size 
    ~MyCircularStringQueue();           // Destructor to remove from memory 
    void enqueue(elem x);   // enqueue function for inserting an element at the rear of Queue
    int dequeue();          // dequeue function for deleting an element at the front of Queue
    int isFull();       // check either the Queue is full or not
    int isEmpty() const;      // check either Queue is empty or not
    void display();     // function for displaying the Queue 
	double	Front();
	double	Rear();
	int	Size() const;
	void printDetail() const;
};

