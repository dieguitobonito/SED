#include "Node.h"

Node::Node(){
	Data();
	next = nullptr;
	prev = nullptr;
}

Node::Node(Data data, Node* next, Node* prev){
	this->data = data;
	this->next = next;
	this->prev = prev;
}

Node::Node(Data data){
	this->data = data;
	next = nullptr;
	prev = nullptr;
}
