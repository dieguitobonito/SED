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
	std::string year = "";

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

	if(sure){
		// Todos los generadores aleatorios
		random_device semilla;
		uniform_real_distribution<float> generarPrecio(0.0, 999.999);
		uniform_int_distribution<unsigned int> generarID(0, 10000);
		uniform_int_distribution<int> generarNombre(0, 127); 

		for(int i = 0; i < quantity; i++){
			name = names[generarNombre(semilla)];
			price = generarPrecio(semilla);
			id = generarID(semilla);
			Producto item(name, price, id);
			ld.addNode(item);
		}
		std::cout << "\nListo\n" << std::endl;
	}
}

void nodeGeneration(){
	std::string name = "";
	float price = 0;
	unsigned int id = 0;
	std::size = "";
	unsigned int year = 0;
	std::cout << "Entraste a la generación manual" << endl;
}

void sorting(){
	int opcion = 0;
	std::cout << "1. Ordenar por id (Quicksort)\n"
		"2. Ordenar precio (Mergesort)\n"
		"3. Ordenar por nombre (Insert sort)\n"
		"4. Ordenar por precio (Select sort)\n"
		"5. Ordenar por id (Shell sort)\n"
		": ";
	std::cin >> opcion;

	switch(opcion){
		case 1:
			std::cout << "Ordenando por id..." << std::endl;
			ld.quickSort(&ld);
			std::cout << "Listo" << std::endl;
			break;
		case 2:
			std::cout << "Ordenando por precio..." << std::endl;
			ld.mergeSort(ld.size(&ld), &ld);
			std::cout << "Listo" << std::endl;
			break;
		case 3:
			ld.insertSort(&ld);
			break;
		case 4:
			ld.selectSort(&ld);
			break;
		case 5: 
			unsigned int n = ld.size(&ld);
			ld.shellSort(&ld);
			break;
		default:
			std::cout << "Opción inválida" << std::endl;
	}
}

void menu(){
	std::cout << "--- Ordenamientos ---\n\n";

	int opcion = 0;
	while(opcion != 4){
		std::cout << "1. Añadir elementos\n"
			"2. Mostrar lista\n"
			"3. Ordenar\n"
			"4. Salir\n"
			": ";
		cin >> opcion;
		switch(opcion){
			case 1:
				unsigned int subOption = 0;
				std::cout << "¿Quieres generarlos tú\n"
					"o la máquina? (1/2)\n";
				std::cout << ": ";
				cin << subChoice;
				switch(subOption){
					case 1:
						nodeGeneration();
						break;
					case 2:
						randomnodeGeneration();
						break;
					default:
						std::cout << "Opción incorrecta"
							<< std::endl;
				}
				break;
			case 2:
				ld.printForward();
				break;
			case 3:
				sorting();
				break;
			case 4:
				std::cout << "Adiós" << std::endl;
				break;
			default:
				std::cout << "Opción incorrecta" << std::endl;
		}
	}

	std::string menu_name;
	unsigned int menu_age;
	bool vaxio = false;
	unsigned int option;
}

int main(){
	std::cout << "Nota: al agregar nodos, puede que lance bad_alloc, ten en cuenta cuánta memoria tiene tu equipo" << std::endl;
	srand(time(NULL));
	menu();
	return 0;
}
