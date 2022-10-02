#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(){
	header = new Node;
	trailer = new Node;
	header->next = trailer;
	trailer->prev = header;
	header->prev = nullptr;
	trailer->next = nullptr;
}

int LinkedList::getFront(){
	return header->next->data;
}

int LinkedList::getBack(){
	return trailer->prev->data;
}

void LinkedList::addFront(int dt){
	Node* nd = new Node;
	nd->data = dt;
	nd->prev = header;
	nd->next = header->next;

	header->next->prev = nd;
	header->next = nd;
}

void LinkedList::addBack(int dt){
	Node* nd = new Node;
	nd->data = dt;
	nd->prev = trailer->prev;
	nd->next = trailer;

	trailer->prev->next = nd;
	trailer->prev = nd;
}

void LinkedList::removeFront(){
	Node* nd = header->next->next;
	delete header->next;
	header->next = nd;
	nd->prev = header;
}

void LinkedList::removeBack(){
	Node* nd = trailer->prev->prev;
	delete trailer->prev;
	trailer->prev = nd;
	nd->next = trailer;
}

void LinkedList::printReverse(){
	// Referencia al verdadero
	// último dato
	Node* tmp = trailer->prev;

	while(tmp != header){
		cout << tmp->data << endl;
		tmp = tmp->prev;
	}
}

void LinkedList::printForward(){
	// Referencia al verdadero
	// primer dato
	Node* tmp = header->next;

	while(tmp != trailer){
		cout << tmp->data << endl;
		tmp = tmp->next;
	}
}

LinkedList::~LinkedList(){
	// Sabemos que la lista está vacía cuando
	// los sentinelas se apuntan
	while(header->next != trailer)
		removeFront();

	delete header;
	delete trailer;
}
