#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList{
	public:
		LinkedList();
		// Puede que no se
		// necesite destructor
		~LinkedList();
		int getFront();
		int getBack();
		void addFront(int dt);
		void addBack(int dt);
		void removeFront();
		void removeBack();
		void printReverse();
		void printForward();
	private:
		// Sentinels
		Node* header;
		Node* trailer;
};
#endif
