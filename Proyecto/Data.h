#ifndef DATA_H
#define DATA_H

#include <string>
using namespace std;

class Data{
	public:
		Data();
		Data(string, float, unsigned int, string, unsigned int);

		// Getters
		string getName();
		float getPrice();
		unsigned int getKey();
		string getSize();
		unsigned int getYear();

		// Setters
		void setName(string);
		void setPrice(float);
		void setKey(unsigned int);
		void setSize(string);
		void setYear(unsigned int);

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
