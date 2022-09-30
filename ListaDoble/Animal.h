#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

using namespace std;

class Alumno{
	public:
		string nombre;
		int edad;
		unsigned int id;

		// Constructores
		Alumno();
		Alumno(string, int, unsigned int);
};

#endif // ALUMNO_H
