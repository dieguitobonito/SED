#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using namespace std;

class Alumno{
	public:
		Alumno(string, unsigned int);
	private:
		string name;
		unsigned int age;
};
#endif
