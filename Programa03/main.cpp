#include <iostream>
#include <random>
#include <string>
#include "LinkedList.h"
#include "Node.h"
#include "Producto.h"
using namespace std;

LinkedList ld;

void nodeGeneration(){

	string names[127] = {						
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

unsigned int quantity = 0;
	cout << "¿Cuántos elementos quieres generar?\n: ";
	cin >> quantity;

	string name = "";
	float price = 0;
	unsigned int id = 0;

	bool sure = true;

	if(quantity > 10000){
		int decision = 0;
		cout << "¿Seguro?\n1. Sí\n2. No\n: ";
		cin >> decision;
		switch(decision){
			case 1:{
				cout << "Tú lo pediste" << endl;
				sure = true;
				break;
			}
			case 2:{
				cout << "Es que sí son muchos" << endl;
				sure = false;
				break;
			}
			default:{
				cout << "Opción inválida" << endl;
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
		cout << "\nListo\n" << endl;
	}
}

void sorting(){
	int opcion = 0;
	cout << "1. Ordenar por id (Quicksort)\n"
		"2. Ordenar precio (Mergesort)\n"
		"3. Ordenar por nombre (Insert sort)\n"
		"4. Ordenar por precio (Select sort)\n"
		": ";
	cin >> opcion;

	switch(opcion){
		case 1:
			cout << "Ordenando por id..." << endl;
			ld.quickSort(&ld);
			cout << "Listo" << endl;
			break;
		case 2:
			cout << "Ordenando por precio..." << endl;
			ld.mergeSort(ld.size(&ld), &ld);
			cout << "Listo" << endl;
			break;
		case 3:
			ld.insertSort(&ld);
			break;
		case 4:
			ld.selectSort(&ld);
			break;
		default:
			cout << "Opción inválida" << endl;
	}
}

void menu(){
	cout << "--- Ordenamientos ---\n\n";

	int opcion = 0;
	while(opcion != 4){
		cout << "1. Añadir elementos\n"
			"2. Mostrar lista\n"
			"3. Ordenar\n"
			"4. Salir\n"
			": ";
		cin >> opcion;
		switch(opcion){
			case 1:
				nodeGeneration();
				break;
			case 2:
				ld.printForward();
				break;
			case 3:
				sorting();
				break;
			case 4:
				cout << "Adiós" << endl;
				break;
			default:
				cout << "Opción incorrecta" << endl;
		}
	}

	string menu_name;
	unsigned int menu_age;
	bool vaxio = false;
	unsigned int option;
}

int main(){
	cout << "Nota: al agregar nodos, puede que lance bad_alloc, ten en cuenta cuánta memoria tiene tu equipo" << endl;
	srand(time(NULL));
	menu();
	return 0;
}
