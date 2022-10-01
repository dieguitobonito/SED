#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using namespace std;

class Alumno{
	public:
		string nombre;
		unsigned int edad;

		Alumno();
		Alumno(string, unsigned int);
};
#endif
