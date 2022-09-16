#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

// Para que se puedan utilizar std::string
using namespace std;

class Alumno{
	public:
		string nombre;
		int edad;
		Alumno* sig;

		// Constructores
		Alumno();
		Alumno(string, int, Alumno*);
};

#endif // ALUMNO_H
