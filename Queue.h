//Mr Jesse Byers
//3162857
//SENG1120 - Assignment 2
//Queue.h

using namespace std;

#include "LinkedList.h"


#ifndef JESSE_ASSIGNMENT2Q
#define JESSE_ASSIGNMENT2Q


	template <typename data_type>
class Queue
{

public: 
	// Precondition: none
    // Postcondition: Linked list is created within the queue. Used is set to 0 and total is set to 0.0
	Queue();

	// Precondition: none
    // Postcondition: Linked list is created within the queue. Used is set to 0 and total is set to 0.0
	Queue(const data_type& data);
	
	// Precondition: Queue has been initialized
    // Postcondition: adds to the end of queue
	void enqueue(const data_type& data); 

	// Precondition: Queue has been initialized
    // Postcondition: Queue is deleted
	~Queue();

	// Precondition: Queue has been initialized 
    // Postcondition: front of the queue is removed
	void dequeue();

	// Precondition: Queue has been initialized
    // Postcondition: Returns true or false
	bool isEmpty() const;
	
	// Precondition:  queue has been initialized
    // Postcondition: returns the size of the queue
	int size() const; 
	
	// Precondition: queue has been initialized
    // Postcondition: returns the front of the queue
	data_type& front() const;

	// Precondition: queue has been initialized
    // Postcondition: Adds to the end of the queue
	void push(const data_type& entry); 

	// Precondition: queue has been initialized
    // Postcondition: removes from the front of the queue
	void pop();
	
	// Precondition: queue has been initialized with data
    // Postcondition: average is calculated and returned
	double average();
	
private:
	LinkedList<data_type>* list;
	int used;
	double total;
	

	
};


#include "Queue.template"
#endif