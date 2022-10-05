#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList{
	public:
		LinkedList();
		// Puede que no se
		// necesite destructor
		// ~LinkedList();
		void getFront(void);
		void getBack(void);
		void addFront(Alumno);
		void addBack(Alumno);
		void deleteThis(string, unsigned int);
		void deleteAll(void);
		void removeFront(void);
		void removeBack(void);
		void printReverse(void);
		void printForward(void);
		bool isEmpty(void);
		void initialize(void);
		Node* find(string, unsigned int);
	private:
		// Sentinels
		Node* header;
		Node* trailer;
};
#endif
