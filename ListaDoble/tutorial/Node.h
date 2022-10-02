#ifndef NODE_H
#define NODE_H

#include <string>

class Node{
	private:
		int data;
		Node* next;
		Node* prev;

	// Para que lista pueda acceder
	// a los datos
	friend class LinkedList;
};
#endif
