#include "SombreroClasificador.h"

SombreroClasificador::SombreroClasificador()
{
}

ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> listaMagos,int x){
	ClaseHogwarts* hogwarts=new ClaseHogwarts();
	int cantidadSlytherin=0,cantidadHufflepuff=0,cantidadRavenclaw=0,cantidadGryffindor=0;
	for(int i=0;i<listaMagos.size();i++){
		if(typeid( *listaMagos[i])==typeid(MagoSlytherin)){
			MagoSlytherin* magos=dynamic_cast<MagoSlytherin*>(listaMagos[i]);
			cantidadSlytherin++;
		}
		if(typeid( *listaMagos[i])==typeid(MagoHufflepuff)){
			MagoHufflepuff* hufflepuff=dynamic_cast<MagoHufflepuff*>(listaMagos[i]);
			cantidadHufflepuff++;
		}
		if(typeid( *listaMagos[i])==typeid(MagoRavenclaw)){
			MagoRavenclaw* magor=dynamic_cast<MagoRavenclaw*>(listaMagos[i]);
			cantidadRavenclaw++;
		}
					
		if(typeid( *listaMagos[i])==typeid(MagoGryffindor)){
			MagoGryffindor* magog=dynamic_cast<MagoGryffindor*>(listaMagos[i]);
			cantidadGryffindor++;
		}
	}
	cout<<"Cantidad Slytherin: "<<cantidadSlytherin<<endl;
	cout<<"Cantidad Hufflepluff: "<<cantidadHufflepuff<<endl;
	cout<<"Cantidad Ravenclaw: "<<cantidadRavenclaw<<endl;
	cout<<"Cantidad Gryffdindor: "<<cantidadGryffindor<<endl;
	return hogwarts;
}