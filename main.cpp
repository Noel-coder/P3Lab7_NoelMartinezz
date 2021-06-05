#include "Mago.h"
#include "ClaseHogwarts.h"
#include "SombreroClasificador.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
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

vector<Mago*> casaMagos() {
	vector <Mago*>auxiliarMagos;
	double seleccionCasa;
	for(int i = 0; i < 20; i++) {
		seleccionCasa = rand()%100;
		seleccionCasa /= 100;
		if(seleccionCasa >= 0.00 && seleccionCasa <=0.25) {
			//El mago va para slytherin
			int astucia = rand() % 20;
			astucia += 80;
			int inteligencia = rand() % 100;
			int lealtad = rand() % 100;
			int valentia = rand() % 100;
			int liderazgo = rand()%20;
			liderazgo += 80;
			auxiliarMagos.push_back(new MagoSlytherin(liderazgo,astucia,inteligencia,lealtad,valentia));
		}else if(seleccionCasa >= 0.25 && seleccionCasa <= 0.5){
			//El mago va para Ravenclaw
			int astucia = rand() % 100;
			int inteligencia = rand() % 20;
			inteligencia += 80;
			int lealtad = rand() % 100;
			int valentia = rand() % 100;
			int creatividad = rand() % 20;
			creatividad += 80;
			auxiliarMagos.push_back(new MagoRavenclaw(creatividad,astucia,inteligencia,lealtad,valentia));
		}else if(seleccionCasa >= 0.5 && seleccionCasa <= 0.75){
			//El mago va para HufflePuff
			int astucia = rand() % 100;
			int inteligencia = rand() % 100;
			int lealtad = rand() % 20;
			lealtad += 80;
			int valentia = rand() % 100;
			int paciencia = rand() % 20;
			paciencia += 80;
			auxiliarMagos.push_back(new MagoHufflepuff(paciencia,astucia,inteligencia,lealtad,valentia));
		}else if(seleccionCasa >= 0.75 && seleccionCasa <= 1){
			//El mago va para Gryffindor
			int astucia = rand() % 100;
			int inteligencia = rand() % 100;
			int lealtad = rand() % 100;
			int valentia = rand() % 20;
			valentia += 80;
			int atrevimiento = rand() % 20;
			atrevimiento += 80;
		}
	}
	return auxiliarMagos;
}

int main(int argc, char** argv) {
	ClaseHogwarts* hogwarts;
	SombreroClasificador* sombrero = new SombreroClasificador();
	srand(time(NULL));
	vector <Mago*> magos;
	magos = casaMagos();

	system("color 0c");
	int opcion=0;
	while(opcion != 4) {
		switch(opcion=menu()) {
			case 1: {
				//Separar por casa

				break;
			}
			case 2: {
				//Imprimir por casa
				hogwarts->toString();
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
	delete hogwarts;
	delete sombrero;
	return 0;
}