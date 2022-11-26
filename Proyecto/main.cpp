#include <iostream>
#include <random>
#include <string>
#include "LinkedList.h"
#include "Node.h"
#include "Data.h"
//using namespace std;

LinkedList ld;

void randomnodeGeneration(){

	std::string names[127] = {	
		"Pet Bed",
		"Dog Seat Cover",
		"Multifunction Biting Toys",
		"Dog Toothbrush",
		"Pet Grooming",
		"Pet Painting",
		"Novelty Cat Beds",
		"Dog Jackets",
		"Cat Litter Mat",
		"Personalized Dog Collar",
		"Robot Vacuum",
		"Smart Water Purifier",
		"Smart Tracker",
		"Smart Pet Toys",
		"Smartwatches",
		"Smart 3D Pens",
		"Reusable Smart Notebook",
		"Smart Home Security",
		"Smart Padlock",
		"Microwave Cleaner",
		"Multifunction Bottle Opener",
		"Embossed Rolling Pin",
		"Silicone Cooking Tools",
		"Vegetable Cutter",
		"Mandoline Slicers",
		"Silicone Gloves",
		"Milk Carton Water Bottle",
		"Spin Mop",
		"Reusable Silicone Lids",
		"Animal Socks",
		"Lambswool Coat",
		"Oversized Sweater",
		"Bodycon Dress",
		"Shapewear",
		"Nipple Covers",
		"Cat Hoodie",
		"Leather Jackets",
		"Floral Spring Jacket",
		"TV Blanket",
		"Men’s Plaid Shirt",
		"Hooded Sweatshirt",
		"Wool Coat",
		"Men’s Compression Shirts",
		"Bomber Jacket",
		"Spring Jacket",
		"Tech Gloves",
		"Mandarin Collar Shirts",
		"Men’s Joggers",
		"Bamboo Socks",
		"Orthopedic Pillows",
		"Bath Towel Cap",
		"Terrarium",
		"Pet Grooming Products",
		"Makeup Organizer",
		"Burrito Blanket",
		"Pet Bed",
		"Couch Slipcover",
		"Reversible Umbrella",
		"Reusable Straws",
		"Hip Hop Jewelry",
		"Charm Bracelet",
		"Solar System Bracelet",
		"Pendant Necklace",
		"Initial Necklace",
		"Multilayer Necklace",
		"Magnetic Bracelet",
		"Locket",
		"Hoop Earrings",
		"Personalized Letter Rings",
		"Magnetic Eyelashes",
		"Shimmer Nail Polish",
		"Hair Wigs",
		"Massage Gun",
		"Travel Makeup Brushes",
		"Foot Bath",
		"Beard Straightener",
		"Dental Scaler",
		"Neck Pillow",
		"Face Massage Roller",
		"Smartwatch",
		"Marble Watch",
		"Magnetic Starry Sky Watch",
		"Luminous Watch",
		"Sport Watches",
		"Luxury Watch",
		"Minimalist Watch",
		"Kids’ Smartwatch",
		"Fashion Watches",
		"Pregnancy Brace",
		"Baby Hip Seat",
		"Baby Moccasins",
		"Pacifier Feeder",
		"Mother and Baby Beanie Hats",
		"Baby Glove Teether",
		"Winter Clothing",
		"Spill-Proof Bowl",
		"Swaddle Wrap",
		"Hipseat Carrier",
		"Planetarium Light",
		"Photo Twinkle Lights",
		"Photo Lamp",
		"Night Light Projector",
		"Camping Headlamp",
		"Wall Lights and Sconce",
		"Pendant lamp",
		"Selfie Night Light",
		"Rocket Lamp",
		"Novelty Lights",
		"Measurement Tool",
		"Night Vision Security Camera",
		"Water-Saving Shower Head",
		"Air Diffuser",
		"Fabric Steamer",
		"Plug In Wall Heater",
		"Water Filter",
		"Sponge Paint Roller",
		"Double-Sided Tape",
		"Wedding Evening Dress",
		"Bridal Ball Gown",
		"Wedding Belt Sash",
		"LED Wedding Balloons",
		"Plus Size Evening Dress",
		"Bridal Hairband",
		"Silk Flowers",
		"Silicone Wedding Band",
		"Bridal Robe",
		"Men’s Formalwear Bowtie",
	};

	std::string sizes[3] = {
		"SMALL",
		"MEDIUM",
		"LARGE",
	};

	unsigned int quantity = 0;
	std::cout << "¿Cuántos elementos quieres generar?\n: ";
	std::cin >> quantity;

	std::string name = "";
	float price = 0;
	unsigned int key = 0;
	std::string size = "";
	unsigned int year = 0;

	bool sure = true;

	if(quantity > 10000){
		int decision = 0;
		std::cout << "¿Seguro?\n1. Sí\n2. No\n: ";
		std::cin >> decision;
		switch(decision){
			case 1:{
				std::cout << "Tú lo pediste" << std::endl;
				sure = true;
				break;
			}
			case 2:{
				std::cout << "Es que sí son muchos" << std::endl;
				sure = false;
				break;
			}
			default:{
				std::cout << "Opción inválida" << std::endl;
				sure = false;
			}
		}
	}

	if(sure && quantity > 0){
		// Todos los generadores aleatorios
		random_device semilla;
		uniform_int_distribution<int> generarNombre(0, 127); 
		uniform_real_distribution<float> generarPrecio(0.0, 999.999);
		uniform_int_distribution<unsigned int> generarKey(1, 10001);
		uniform_int_distribution<int> generarSize(0, 2);
		uniform_int_distribution<unsigned int> generarYear(1950, 2050);


		for(int i = 0; i < quantity; i++){
			name = names[generarNombre(semilla)];
			price = generarPrecio(semilla);
			key = generarKey(semilla);
			size = sizes[generarSize(semilla)];
			year = generarYear(semilla);
			Data item(name, price, key, size, year);
			ld.addNode(item);
		}
		std::cout << "\nListo\n" << std::endl;
	}
}

void nodeGeneration(){
	std::string name = "";
	float price = 0;
	unsigned int key = 0;
	std::string size = "";
	unsigned int year = 0;

	int proceed;

	std::cout << "Key: ";
	std::cin >> key;

	std::cin.ignore();
	std::cout << "Nombre: ";
	std::getline(std::cin, name);

	std::cout << "Precio: ";
	std::cin >> price;

	std::cin.ignore();
	std::cout << "Tamaño: ";
	std::getline(std::cin, size);

	std::cout << "Año: ";
	std::cin >> year;

	std::cout << "\nLos datos son:\n"
		<< "Key: " << key << "\n"
		<< "Nombre: " << name << "\n"
		<< "Precio: " << price << "\n"
		<< "Tamaño: " << size << "\n"
		<< "Año: " << year << "\n"
		<< "¿Agregar? (1. Sí / 2. No)\n: ";
	std::cin >> proceed;

	switch(proceed){
		case 1:{
			Data item(name, price, key, size, year);
			ld.addNode(item);
			std::cout << "Registro añadido" << std::endl;
			break;
		}
		case 2:{
			std::cout << "No se agregará el registro" << std::endl;
			break;
		}
		default:
			std::cout << "Error, no se agregará" << std::endl;
	}
}

void create(){
	int option = 0;

	std::cin.ignore();
	std::cout << "¿Que los cree la máquina o tú? (1/2)\n: ";
	std::cin >> option;

	switch(option){
		case 1:
			randomnodeGeneration();
			break;
		case 2:
			nodeGeneration();
			break;
		default:
			std::cout << "Opción incorrecta" << std::endl;
	}

}

void kill(){
	std::cout << "Kill" << std::endl;
	Node* a = ld.search(&ld);
	ld.deleteNode(a);
}

void consult(){
	int option = 0;
	std::cout << "Buscar dato o imprimir la lista (1/2)\n: ";
	std::cin >> option;
	switch(option){
		case 1:
			std::cout << "Look for" << endl;
			break;
		case 2:
			ld.printForward();
			break;
		default:
			std::cout << "Opción incorrecta" << std::endl;
	}
}

void exportList(){
	ld.printtoFile(&ld);
	std::cout << "Lista exportada" << std::endl;
}
void importList(){
	std::cout << "Si tienes muchos datos puede fallar" << std::endl;

}

void menu(){
	std::cout << "--- Ordenamientos ---\n\n";

	int opcion = 0;
	while(opcion != 9){
		std::cout << "1. Dar de alta\n"
			"2. Dar de baja\n"
			"3. Consultar\n"
			"4. Modificar registro\n"
			"5. Ordenar toda la lista\n"
			"6. Exportar lista\n"
			"7. Importar lista\n"
			"8. Mostrar toda la lista\n"
			"9. Salir\n"
			": ";
		std::cin >> opcion;
		switch(opcion){
			case 1:
				create();
				break;
			case 2:
				kill();
				break;
			case 3:
				ld.lookFor(&ld);
				break;
			case 4:
				ld.modifyRegister(&ld);
				break;
			case 5:
				std::cout << "Ordenando..." << std::endl;
				ld.mergeSort(ld.size(&ld), &ld);
				std::cout << "Listo" << std::endl;
				break;
			case 6:
				exportList();
				break;
			case 7:
				importList();
				break;
			case 8:
				ld.printForward();
				break;
			case 9:
				std::cout << "Adiós" << std::endl;
				break;
			default:
				std::cout << "Opción incorrecta" << std::endl;
		}
	}
}

int main(){
	std::cout << "Nota: al agregar nodos, puede que lance bad_alloc, ten en"
		" cuenta cuánta memoria tiene tu equipo" << std::endl;
	srand(time(NULL));
	menu();
	return 0;
}
