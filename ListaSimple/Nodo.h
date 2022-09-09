#ifndef NODO_H
#define NODO_H

class Nodo{
	public:
		int dato;
		Nodo* sig;

		// Constructores
		Nodo();
		Nodo(int, Nodo*);
};

#endif // NODO_H
