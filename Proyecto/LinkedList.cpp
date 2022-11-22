// El orden de los headers importa?
#include "Node.h"
#include "LinkedList.h"

#include <iostream>
#include <string>
using namespace std;


LinkedList::LinkedList(){
	header = new Node();
	trailer = new Node();
	header->next = trailer;
	trailer->prev = header;
	header->prev = nullptr;
	trailer->next = nullptr;
}

void LinkedList::addNode(Producto a){
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
		cout << "Id, nombre de producto y precio\n" << endl;
		unsigned int count = 0;
		while(tmp){
			count++;
			cout << count << ".- ";
			cout << tmp->data.id << ", " << tmp->data.name <<
				", " << tmp->data.price << endl;
			tmp = tmp->next;
		}
	}
	cout << "\n";
}

void LinkedList::swapNodes(Node* a, Node* b){
	Node* savedData;

	savedData->data.id = b->data.id;
	savedData->data.name = b->data.name;
	savedData->data.price = b->data.price;

	b->data.id = a->data.id;
	b->data.name = a->data.name;
	b->data.price = a->data.price;

	a->data.id = savedData->data.id;
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

void LinkedList::bubbleSort(LinkedList* l){
	Node* tmp = l->header->next;

	int nodes = size(l);
	int i = 0;

	while(i < nodes - 1){
		while(tmp->next){
			if(tmp->data.id > tmp->next->data.id){
				swapNodes(tmp, tmp->next);
			}
			tmp = tmp->next;
		}
		tmp = l->header->next;
		i++;
	}
}

// Ordenar id
void LinkedList::quickSort(LinkedList* l){
	Node* pivot;
	Node* tmp;
	
	LinkedList* upper = new LinkedList();
	LinkedList* lower = new LinkedList();

	if(l->size(l) > 1){
		pivot = l->header->next;
		Node* savedPivot = new Node(pivot->data);
		tmp = pivot->next;

		while(tmp){
			if(tmp->data.id < pivot->data.id){
				lower->addNode(tmp->data);
			}
			else{
				upper->addNode(tmp->data);
			}
			tmp = tmp->next;
		}

		quickSort(lower);
		quickSort(upper);

		// Elementos menores
		tmp = l->header->next;
		Node* left = lower->header->next;

		// Acomodando la lista original con la sublista ordenada
		// Como esto se hace recursivamente, lo que nos importa
		// es la sublista principal que ya estará ordenada
		// left->data.name != "" porque hay unos nodos inicializados vacíos,
		// los evito con eso
		while(left && tmp && left->data.name != ""){
			tmp->data = left->data;
			tmp = tmp->next;
			left = left->next;
		}

		tmp->data = savedPivot->data;
		tmp = tmp->next;

		// Elementos mayores
		Node* right = upper->header->next;

		// Lo mismo pasará con la sublista de elementos mayores
		while(right && tmp && right->data.name != ""){
			tmp->data = right->data;
			tmp = tmp->next;
			right = right->next;
		}
	}
}

// Ordenar precio
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
			if(iz->data.price < de->data.price){
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

// Ordenar nombre
void LinkedList::insertSort(LinkedList* l){
	cout << "Ordenando por nombres..." << endl;
	// El subarreglo comenzaría desde el segundo elemento
	Node* unsorted = l->header->next->next;
	Node* tmp = nullptr;
	
	while(unsorted){
		tmp = unsorted;
		while(tmp->prev && tmp->data.name < tmp->prev->data.name){
			cout << "";
			swapNodes(tmp, tmp->prev);
			tmp = tmp->prev;
		}
		unsorted = unsorted->next;
	}

	cout << "Listo" << endl;
}

void LinkedList::selectSort(LinkedList* l){
	Node* aux = l->header->next;
	Node* pos = l->header->next;
	Node* menor = l->header->next;

	cout << "Ordenando por precio..." << endl;

	while(pos->next){
		aux = pos->next;
		menor = pos;
		while(aux){
			if(menor->data.price > aux->data.price){
				menor = aux;
			}
			aux = aux->next;
		}
		swapNodes(pos, menor);
		pos = pos->next;
	}
	cout << "Listo" << endl;
}

void LinkedList::shellSort(LinkedList* l, unsigned int n){
	for(unsigned int i = n / 2; i > 0; i /= 2){


	}
}
