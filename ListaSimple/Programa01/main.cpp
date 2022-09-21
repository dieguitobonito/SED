#include <iostream>
#include "Lista.h"
#include "Nodo.h"

#include <string>

using namespace std;

void menu(){
	cout << "--- Clase de alumnos ---" << endl;
	int opc = 0;
	int valor;

	Lista salonA;
	Nodo juanito;

	// Lo necesario para poder operar con la lista
	string name;
	int age;
	int pos;
	while(opc != 15){
		cout << "\n1. Añadir alumno al inicio" << endl;
		cout << "2. Añadir alumno al final" << endl;
		cout << "3. Insertar alumno en posición" << endl;
		cout << "4. Dar de baja a un alumno" << endl;
		cout << "5. Dar de baja toda la clase" << endl;
		cout << "6. Buscar a un alumno" << endl;
		cout << "7. Crear una lista sin alumnos" << endl;
		cout << "8. ¿Tengo alumnos?" << endl;
		cout << "9. ¿Quién es el primero en la lista?" << endl;
		cout << "10. ¿Quién es el último en salir?" << endl;
		cout << "11. ¿Cuántos alumnos hay?" << endl;
		cout << "12. Qué alumno sigue de x alumno" << endl;
		cout << "13. Qué alumno va antes de x alumno" << endl;
		cout << "14. Mostrar toda la lista" << endl;
		cout << "15. Salir" << endl;
		cout << ": ";
		cin >> opc;
		cout << endl;
	
		switch(opc){

			// Añadir al inicio
			case 1:
				cout << "¿Cómo se llama el alumno?\n: ";
				cin >> name;

				cout << "¿Cuántos años tiene?\n: ";
				cin >> age;

				juanito.persona.nombre = name;	
				juanito.persona.edad = age;
				salonA.insertarInicio(juanito);
				break;

			// // Añadir al final 
			// case 2:
			// 	cout << "¿Cómo se llama el alumno?\n: ";
			// 	cin >> nombre;

			// 	cout << "¿Cuántos años tiene?\n: ";
			// 	cin >> edad;

			// 	salonA.insertarFinal(nombre, edad);
			// 	break;

			// // Insertar en posición
			// case 3:
			// 	cout << "¿En qué posición quieres colocar al alumno?\n: ";
			// 	cin >> pos;
			// 	if(pos <= salonA.tamaño() && pos >= salonA.tamño()){
			// 		cout << "¿Cómo se llama el alumno?\n: ";
			// 		cin >> nombre;

			// 		cout << "¿Cuántos años tiene?\n: ";
			// 		cin >> edad;

			// 		salonA.insertarPos(pos, nombre, edad);
			// 	}
			// 	else{
			// 		cout << "Posición no existente en la lista, saliendo" << endl;
			// 	}
			// 	break;

			// // Dar de baja alumno
			// case 4:
			// 	cout << "¿Cómo se llama el alumno a dar de baja?\n: ";
			// 	cin >> nombre;

			// 	cout << "¿Cuántos años tiene?\n: ";
			// 	cin >> edad;

			// 	salonA.eliminar(nombre, edad);
			// 	break;

			// // Dar de baja toda la clase
			// case 5:
			// 	bool confirmacion;
			// 	cout << "¿Seguro que quieres dar de baja la clase?\n0. Sí\n1. No\n: ";
			// 	cin >> confirmacion;

			// 	if(confirmacion == 0){
			// 		cout << "Operación cancelada por usuario" << endl;
			// 	}
			// 	else if(confirmacion == 1){
			// 		salonA.eliminarTodo();
			// 	}
			// 	else{
			// 		cout << "Valor incorrecto, operación cancelada" << endl;
			// 	}
			// 	break;
			// 
			// // Buscar alumno
			// case 6:	
			// 	cout << "¿Cómo se llama el alumno?\n: ";
			// 	cin >> nombre;

			// 	cout << "¿Cuántos años tiene?\n: ";
			// 	cin >> edad;

			// 	salonA.buscar(nombre, edad);
			// 	break;

			// // Inicializar
			// case 7:
			// 	salonA.inicializa();
			// 	break;

			// // Vacía
			// case 8:
			// 	if (salonA.vacía() == 1)
			// 		cout << "La lista no está vacia" << endl;
			// 	else
			// 		cout << "La lista está vacía" << endl;
			// 	break;
			// 
			// // Primer alumno
			// case 9:
			// 	salonA.primero();
			// 	break;

			// // Último alumno
			// case 10:
			// 	salonA.ultimo();
			// 	break;

			// // Cantidad de alumnos
			// case 11:
			// 	cout << "El salón contiene " << salonA.tamaño() << " alumnos" << endl;
			// 	break;

			// // Siguiente alumno
			// case 12:
			// 	cout << "Nombre del alumno a saber cuál es su siguiente compañero: ";
			// 	cin >> nombre;
			// 	cout << "La edad de dicho alumno: ";
			// 	cin >> edad;

			// 	salonA.siguiente(nombre, edad);
			// 	break;

			// // Anterior alumno
			// case 13:
			// 	cout << "Nombre del alumno a saber cuál es su compañero anterior: ";
			// 	cin >> nombre;
			// 	cout << "La edad de dicho alumno: ";
			// 	cin >> edad;

			// 	salonA.anterior(nombre, edad);
			// 	break;
			// 
			// Imprimir toda la lista
			case 14:
				salonA.mostrarTodo();
				break;

			// Salir
			case 15:
				opc = 15;
				break;
			default:
				cout << "Opción no válida" << endl;
		}
	}
}

int main(){
	menu();
	return 0;
}
