#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList{
	public:
		LinkedList();
		// Puede que no se
		// necesite destructor
		~LinkedList();
		Node* getFront(void);
		Node* getBack(void);
		void addFront(Alumno);
		void addBack(Alumno);
		void removeFront(void);
		void removeBack(void);
		void printReverse(void);
		void printForward(void);
		bool isEmpty(void);
	private:
		// Sentinels
		Node* header;
		Node* trailer;
};
#endif
