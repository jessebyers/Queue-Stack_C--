//Mr Jesse Byers
//3162857
//SENG1120 - Assignment 2
//Stack.h

#ifndef JESSE_ASSIGNMENT2S
#define JESSE_ASSIGNMENT2S

#include <cstdlib> //NULL
#include <iostream>
#include "LinkedList.h"

using namespace std;


template <typename data_type>
class Stack
{

	
public:


	// Precondition: none
	// Postcondition: Stack is created that is empty. Used set to 0.
	Stack();

	// Precondition: none
	 // Postcondition: Stack is created with data in the head. Used set to 0.
	Stack(const data_type& data);

	// Precondition: Stack has been initialized
	// Postcondition: Stack is deleted
	~Stack();

	// Precondition: Stack has been initialized
	// Postcondition: adds the data to the top of the stack
	void push(const data_type& entry);

	// Precondition: Stack has been initialized
	// Postcondition: removes the top element of the stack
	void pop();

	// Precondition: Stack has been initialized
    // Postcondition: returns the size of the stack
	int size() const;

	// Precondition: Stack has been initialized
	// Postcondition: Returns true or false
	bool is_empty() const;

	// Precondition: Stack has been initialized
	// Postcondition: returns the top of the stack
	data_type& top() const;


private:
	LinkedList<data_type>* list;
	int used;


};

// Precondition: Stack has been initialized
// Postcondition: outputs the sequence of nodes in order as they are added
template <typename data_type>
ostream& operator << (ostream& out, Stack<data_type>& ss);

#include "Stack.template"
#endif