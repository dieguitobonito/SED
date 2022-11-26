// El orden de los headers importa?
#include "Node.h"
#include "LinkedList.h"

#include <iostream>
#include <string>
#include <fstream>


LinkedList::LinkedList(){
	header = new Node();
	trailer = new Node();
	header->next = trailer;
	trailer->prev = header;
	header->prev = nullptr;
	trailer->next = nullptr;
}

void LinkedList::addNode(Data a){
	// Primer nodo
	if(!header->next && !trailer->prev){
		Node* tmp = new Node(a);
		header->next = tmp;
		trailer->prev = tmp;
	}
	// Resto de nodos
	else{
		Node* tmp = new Node(a);
		Node* tmpTrailer = trailer->prev;
		tmpTrailer->next = tmp;
		tmp->prev = tmpTrailer;
		trailer->prev = tmp;
	}
}

void LinkedList::printForward(){
	// Referencia al verdadero
	// primer dato
	if(!header && !trailer)
		cout << "Lista vacia" << endl;
	else{
		Node* tmp = header->next;

		cout << "\n";
		cout << "Key, nombre, precio, tamaño y año de fabricación\n" << endl;
		unsigned int count = 0;
		while(tmp){
			count++;
			cout << count << ".- ";
			cout << tmp->data.key << ", " << tmp->data.name << ", "
				<< "$" << tmp->data.price << ", "
				<< tmp->data.size << ", " << tmp->data.year
				<< endl;
			tmp = tmp->next;
		}
	}
	cout << "\n";
}

void LinkedList::swapNodes(Node* a, Node* b){
	Node* savedData;

	savedData->data.price = b->data.price;
	savedData->data.name = b->data.name;
	savedData->data.price = b->data.price;

	b->data.price = a->data.price;
	b->data.name = a->data.name;
	b->data.price = a->data.price;

	a->data.price = savedData->data.price;
	a->data.name = savedData->data.name;
	a->data.price = savedData->data.price;
}

unsigned int LinkedList::size(LinkedList* l){
	unsigned quantity = 0;
	Node* tmp = l->header;
	while(tmp->next){
		++quantity;
		tmp = tmp->next;
	}
	return quantity;
}

// Ordenar key
void LinkedList::mergeSort(unsigned int size, LinkedList* l){
	LinkedList* derecha = new LinkedList;
	LinkedList* izquierda = new LinkedList;
	Node* aux = l->header->next;

	unsigned int med = size / 2;
	unsigned int dif = size % 2;
	int i, j;

	// Partición (hasta que no haya más particiones posibles)
	if(l->size(l) > 1){
		// La mitad izquierda
		i = 0;
		while(aux && i < med){
			izquierda->addNode(aux->data);
			i++;
			aux = aux->next;
		}
		// La mitad derecha
		// Agrega a partir de la mitad porque aux terminará en la mitad
		// para cuando i sea falso
		// Si aux es falso primero, es porque hay un solo elemento
		j = 0;
		while(aux && j < med + dif){
			derecha->addNode(aux->data);
			j++;
			aux = aux->next;
		}

		// Recursividad
		mergeSort(izquierda->size(izquierda), izquierda);
		mergeSort(derecha->size(derecha), derecha);

		// Proceso de merge
		Node* iz = izquierda->header->next;
		Node* de = derecha->header->next;
		aux = l->header->next;
		i = 0;

		// Recorrido de las sublistas
		// para agregar elementos en orden
		// aux en este caso actúa como
		// sublista ordenada
		while(aux && iz && de){
			if(iz->data.key < de->data.key){
				aux->data = iz->data;
				iz = iz->next;
				aux = aux->next;
			}
			else{
				aux->data = de->data;
				de = de->next;
				aux = aux->next;
			}
		}

		// Guarda el resto de la lista izquierda
		if(iz){
			while(iz){
				aux->data = iz->data;
				iz = iz->next;
				aux = aux->next;
			}
		}

		if(de){
			while(de){
				aux->data = de->data;
				de = de->next;
				aux = aux->next;
			}
		}
	}
}

void LinkedList::printtoFile(LinkedList* l){
	if(!size(l))
		std::cout << "No hay nada para guardar" << std::endl;
	else{
		ofstream file;
		file.open("List.txt");

		Node* tmp = l->header->next;

		unsigned int count = 0;
		while(tmp){
			file << tmp->data.key << " | " << tmp->data.name
				<< " | " << tmp->data.price << " | "
				<< tmp->data.size << " | " << tmp->data.year
				<< endl;
			tmp = tmp->next;
		}
		file.close();
	}
}

Node* LinkedList::search(LinkedList* l){
	unsigned int lookKey = 0;
	std::cout << "Llave del registro: ";
	std::cin >> lookKey;
	Node* tmp = l->header->next;

	while(tmp && tmp->data.key != lookKey){
		tmp = tmp->next;
	}

	return tmp;
}

void LinkedList::lookFor(LinkedList* l){
	Node* a = search(l);
	if(!a)
		std::cout << "No se encontró el registro" << std::endl;
	else{
		std::cout << "Valor encontrado en: " << a << std::endl;
		std::cout << a->data.key << ", " << a->data.name
			<< ", " << a->data.price << ", " << a->data.size
			<< ", " << a->data.year << std::endl;
		std::cout << a->next << std::endl;
		std::cout << trailer << std::endl;
		std::cout << trailer->prev << std::endl;
	}
}

void LinkedList::modifyRegister(LinkedList* l){
	Node* a = search(l);
	if(!a)
		std::cout << "No se encontró el registro" << std::endl;
	else{
		int option = 0;

		std::cout << "Valor encontrado en: " << a << std::endl;
		std::cout << a->data.key << ", " << a->data.name
			<< ", " << a->data.price << ", " << a->data.size
			<< ", " << a->data.year << std::endl;

		std::cout << "¿Qué valor quieres modificar?\n"
			<< "1. Key\n"
			<< "2. Nombre\n"
			<< "3. Precio\n"
			<< "4. Tamaño\n"
			<< "5. Año\n"
			<< ": ";
		std::cin >> option;
		switch(option){
			case 1:{
				unsigned int newKey = 0;
				std::cout << a->data.key << std::endl
					<< "Valor nuevo: ";
				std::cin >> newKey;
				a->data.key = newKey;
				std::cout << "Valor actualizado" << std::endl;
				break;
			}
			case 2:{
				std::string newName = "";
				std::cout << a->data.name << std::endl
					<< "Valor nuevo: ";
				// Limpia valores en buffer
				std::cin.ignore();
				std::getline(std::cin, newName);
				a->data.name = newName;
				std::cout << "Valor actualizado" << std::endl;
				break;
			}
			case 3:{
				float newPrice = 0;
				std::cout << a->data.name << std::endl
					<< "Valor nuevo: ";
				std::cin >> newPrice;
				a->data.price = newPrice;
				std::cout << "Valor actualizado" << std::endl;
				break;
			}
			case 4:{
				std::string newSize = "";
				std::cout << a->data.size << std::endl
					<< "Valor nuevo: ";
				// Limpia valores en buffer
				std::cin.ignore();
				std::getline(std::cin, newSize);
				a->data.size = newSize;
				std::cout << "Valor actualizado" << std::endl;
				break;
			}
			case 5:{
				float newYear = 0;
				std::cout << a->data.year << std::endl
					<< "Valor nuevo: ";
				std::cin >> newYear;
				a->data.year = newYear;
				std::cout << "Valor actualizado" << std::endl;
				break;
			}
			default:
				std::cout << "Cambio cancelado" << std::endl;
		}

	}

}

void LinkedList::deleteNode(Node* a){
	if(a && a->next != nullptr){
		Node* tmp = a->prev;
		tmp->next = a->next;
		a->next->prev = tmp;
		delete a;
		std::cout << "Nodo eliminado" << std::endl;
	}
	else{
		if(a && a->next == nullptr){
			Node* tmp = a->prev;
			tmp->next = nullptr;
			trailer->prev = tmp;
			delete a;
			std::cout << "Nodo eliminado" << std::endl;
		}
		else{
			std::cout << "No se encontró el registro" << std::endl;
		}
	}
}
