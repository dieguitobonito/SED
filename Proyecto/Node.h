#ifndef NODE_H
#define NODE_H

#include "Data.h"

class Node{
	public:
		Node();
		Node(Data, Node*, Node*);
		Node(Data);
	private:
		Data data;
		Node* next;
		Node* prev;

	// Para que lista pueda acceder
	// a los datos
	friend class LinkedList;
};
#endif
