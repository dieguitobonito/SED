// El orden de los headers importa?
#include "Node.h"
#include "LinkedList.h"

#include <iostream>
using namespace std;

LinkedList::LinkedList(){
	header = new Node();
	trailer = new Node();
	header->next = trailer;
	trailer->prev = header;
	header->prev = nullptr;
	trailer->next = nullptr;
}

// Return data instead of pointer
void LinkedList::getFront(){
	cout << "El primero es: ";
	cout << header->next->data.name << ", ";
	cout << header->next->data.age << endl;
}

// Same as getfront
void LinkedList::getBack(){
	cout << "El último es: ";
	cout << trailer->prev->data.name << ", ";
	cout << trailer->prev->data.age << endl;
}

void LinkedList::addFront(Alumno dt){
	Node* nd = new Node(dt, nullptr, nullptr);
	nd->data.name = dt.name;
	nd->data.age = dt.age;
	nd->prev = header;
	nd->next = header->next;

	header->next->prev = nd;
	header->next = nd;
}

void LinkedList::addBack(Alumno dt){
	Node* nd = new Node(dt, nullptr, nullptr);
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

	unsigned int count = 0;
	while(tmp != header){
		count++;
		cout << count << ".- ";
		cout << tmp->data.name << tmp->data.age << endl;
		tmp = tmp->next;
	}
}

void LinkedList::printForward(){
	// Referencia al verdadero
	// primer dato
	Node* tmp = header->next;

	unsigned int count = 0;
	while(tmp != trailer){
		count++;
		cout << count << ".- ";
		cout << tmp->data.name << tmp->data.age << endl;
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

bool LinkedList::isEmpty(void){
	return (header->next == trailer);
}

void LinkedList::deleteThis(string n, unsigned int a){
	Node* aux;
	if(!isEmpty()){
	}else{
		cout << "\nLista vacía, no hay por eliminar\n" << endl;
	}

}
