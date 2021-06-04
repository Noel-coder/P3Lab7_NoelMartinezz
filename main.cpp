#include "Mago.h"
#include <iostream>
using namespace std;

int menu() {
	while(true) {
		cout <<"[=======================]"<<endl
		     <<"    Academia Hogwarts    "<<endl
		     <<"[=======================]"<<endl
		     <<"1. Separar por Casa: "<<endl
		     <<"2. Imprimir por Casa: "<<endl
		     <<"3. Imprimir cualidades de cada mago por casa: "<<endl
		     <<"4. Salir: "<<endl
		     <<"Ingrese una opcion: ";
		int valor;
		cin>>valor;
		if(valor > 0 && valor < 5)
			return valor;
	}
}




int main(int argc, char** argv) {
	system("color 0a");
	int opcion=0;
	while(opcion != 4) {
		switch(opcion=menu()) {
			case 1: {
				//Separar por casa
				
				break;
			}
			case 2: {
				//Imprimir por casa
				
				break;
			}
			case 3: {
				//Imprimir cualidades de cada mago por casa
				
				break;
			}
			case 4: {
				cout << "Gracias por Utilizar el Sombrero Clasificador!" << endl;
				break;
			}
			default: {
				cout << "Dato introducido no es valido!" << endl;
				break;
			}
		}
	}

	return 0;
}