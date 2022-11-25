#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList{
	public:
		LinkedList();
		void addNode(Data);
		void printForward(void);

		unsigned int size(LinkedList*);
		void bubbleSort(LinkedList*);
		void quickSort(LinkedList*);
		void mergeSort(unsigned int, LinkedList*);
		void insertSort(LinkedList*);
		void selectSort(LinkedList*);
		void swapNodes(Node*, Node*);
		void shellSort(LinkedList*, unsigned int);


	private:
		// Sentinels
		Node* header;
		Node* trailer;
};
#endif
