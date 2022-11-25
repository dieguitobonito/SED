#include "Data.h"

Data::Data(){
	name = "";
	price = 0;
	key = 0;
	size = "";
	year = 0;

}

Data::Data(string name, float price, unsigned int key, string size, unsigned int year){
	this->name = name;
	this->price = price;
	this->key = key;
	this->size = size;
	this->year = year;

}
