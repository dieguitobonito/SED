#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

using namespace std;

class Alumno{
	public:
		// Atributos
		int edad;
		string nombre;

		// Constructores
		Alumno();
		Alumno(int, string);
};
#endif // ALUMNO_H
