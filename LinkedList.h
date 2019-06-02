//Mr Jesse Byers
//3162857
//SENG1120 - Assignment 2
//LinkedList.h

#ifndef JESSE_ASSIGNMENT2LL
#define JESSE_ASSIGNMENT2LL

#include <cstdlib> //NULL
#include <iostream>
#include "Node.h"

using namespace std;

template <typename data_type>
class LinkedList
{


public:

	//typedef string data_type;

	// Constructors
	// Precondition: none
    // Postcondition: Sets head, tail current to null and list length to 0
	LinkedList();

	// Precondition: none 
    // Postcondition: data is passed through and each token is stored seperately in each node
	LinkedList(const data_type& data);

	//Destructor
	// Precondition: linked list has been initialized 
    // Postcondition: the linked list is deleted
	~LinkedList(); 

	//Mutators
	// Precondition: linked list has been initialized 
    // Postcondition: data is added to the head
	void addToHead(const data_type& data);

	// Precondition: linked list has been initialized 
    // Postcondition: data is added to the tail
	void addToTail(const data_type& data);

	// Precondition: head has been initialized with data
    // Postcondition: head is removed and is replaced by the next node
	void removeHead();

	// Precondition: tail has been initialized with data
    // Postcondition: tail is removed and is replaced by the previous node
	void removeTail();

	// Precondition: current has been initialized with data
    // Postcondition: returns the current nodes data
	data_type getCurrent() const;

	// Precondition: current has been initialized with data
    // Postcondition: current is changed to the next node in the linked list
	void currentForward();

	// Precondition: current has been initialized with data
    // Postcondition: current is changed to the previous node in the linked list
	void currentBack();	

	// Precondition: current has been initialized with data
    // Postcondition: current is changed to the head node in the linked list
	void currentMoveToHead();

	// Precondition: current has been initialized with data
    // Postcondition: current is changed to the tail node in the linked list
	void currentMoveToTail();

	// Precondition: 
    // Postcondition: all nodes that match the input are removed from the linked list 
	void remove(const data_type& input);

	// Precondition: linked list has been initialized with data
    // Postcondition: copys the contents of one linked list to the end of another. Original list is not deleted.
	//void operator += (const LinkedList& rhs); 
	
	// Precondition: tail has been initialized with data
    // Postcondition: tail is returned
	data_type& getTail() const; 

	// Precondition: head has been initialized with data
    // Postcondition: head is returned
	data_type& getHead() const;

	// Precondition: linked list has been initialized
    // Postcondition: size is returned
	size_t size() const;



private:

	Node<data_type>* head;
	Node<data_type>* tail;
	Node<data_type>* current;

	size_t list_length;

};

// Precondition: linked list has been initialized with data
// Postcondition: outputs the sequence of nodes in order as they are added
//template <typename data_type>
//ostream& operator <<(ostream& outs, const LinkedList<data_type>& input); 

#include "LinkedList.template"
#endif