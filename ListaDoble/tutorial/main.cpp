#include <iostream>
using namespace std;

#include "LinkedList.h"

void menu(){
	cout << "Lista doblemente ligada" << endl;
}

int main(){
	void menu();
	int d;
	LinkedList ll;
	ll.addFront(5);
	ll.addFront(15);
	ll.addFront(950);
	ll.addFront(592);
	ll.addFront(5372);
	ll.addBack(5);

	ll.printReverse();
	ll.printForward();
	

	return 0;
}
