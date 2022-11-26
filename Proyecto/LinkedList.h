#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList{
	public:
		LinkedList();
		void addNode(Data);
		void printForward(void);
		void printtoFile(LinkedList*);
		void lookFor(LinkedList*);
		Node* search(LinkedList*);
		unsigned int size(LinkedList*);
		void mergeSort(unsigned int, LinkedList*);
		void swapNodes(Node*, Node*);
		void modifyRegister(LinkedList*);
	private:
		// Sentinels
		Node* header;
		Node* trailer;
};
#endif
