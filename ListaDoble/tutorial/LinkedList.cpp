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
	if(isEmpty()){
		cout << "\nNo hay primero\n" << endl;
	}else{
		cout << "\nEl primero es: ";
		cout << header->next->data.name << ", ";
		cout << header->next->data.age << "\n" << endl;
	}
}

// Same as getfront
void LinkedList::getBack(){
	if(isEmpty()){
		cout << "\nNo hay último\n" << endl;
	}else{
		cout << "El último es: ";
		cout << trailer->prev->data.name << ", ";
		cout << trailer->prev->data.age << endl;
	}
}

// Hola
void LinkedList::addFront(Alumno a){
	Node* nd = new Node(a, nullptr, nullptr);

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
	cout << "\n";
	while(tmp != header){
		count++;
		cout << count << ".- ";
		cout << tmp->data.name << ", " << tmp->data.age << endl;
		tmp = tmp->next;
	}
	cout << "\n" << endl;
}

void LinkedList::printForward(){
	// Referencia al verdadero
	// primer dato
	Node* tmp = header->next;

	cout << "\n";
	unsigned int count = 0;
	while(tmp != trailer){
		count++;
		cout << count << ".- ";
		cout << tmp->data.name << ", " << tmp->data.age << endl;
		tmp = tmp->next;
	}
	cout << "\n";
}

bool LinkedList::isEmpty(void){
	return (header->next == trailer);
}

Node* LinkedList::find(string n, unsigned int a){
	Node* aux;
	aux = header;
	bool found = false;
	if(isEmpty()){
		cout << "\nNo hay lista para comenzar\n" << endl;
	}else{
		while(aux != nullptr && found == false){
			if(aux->data.name == n && aux->data.age == a){
				found = true;
			}else{
				aux = aux->next;
			}
		}
	}
	return aux;
}

void LinkedList::deleteThis(string n, unsigned int a){
	Node* aux = find(n, a);
	if(aux){
		aux->prev->next = aux->next;
		aux->next->prev = aux->prev;
		delete aux;
	}
}

void LinkedList::deleteAll(void){
	while(header->next != trailer)
		removeFront();

	delete header;
	delete trailer;
}

void LinkedList::initialize(void){
	if(isEmpty()){
		header->next = trailer;
		trailer->prev = header;
		header->prev = nullptr;
		trailer->next = nullptr;
		cout << "\nLista inicializada\n" << endl;
	}else{
		cout << "\nLa lista está inicializada\n" << endl;
	}


}
