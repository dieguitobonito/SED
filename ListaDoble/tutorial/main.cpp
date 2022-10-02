#include <iostream>
using namespace std;

#include "LinkedList.h"


int main(){
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
