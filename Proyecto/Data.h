#ifndef DATA_H
#define DATA_H

#include <string>
using namespace std;

class Data{
	public:
		Data();
		Data(string, float, unsigned int, string, unsigned int);

	private:
		string name;
		float price;
		unsigned int key;
		string size;
		unsigned int year;

		friend class Node;
		friend class LinkedList;
};
#endif
