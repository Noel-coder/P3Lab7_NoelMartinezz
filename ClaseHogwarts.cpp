#include "ClaseHogwarts.h"

ClaseHogwarts::ClaseHogwarts() {
}

ClaseHogwarts::~ClaseHogwarts() {
}

void ClaseHogwarts::toString() {
	//to String Gryffindor
	for(int i=0; i < magos_gryffindor.size(); i++) {
		MagoGryffindor* mago = magos_gryffindor[i];
		cout <<"------" << "Mago #" << i <<"------"<<endl;
		cout<<"Casa de Mago: Gryffindor"<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Atrevimiento: "<<mago->getAtrevimiento()<<endl;
	}
	//to string Slytherin
	for(int i=0; i < magos_slytherin.size(); i++) {
		MagoSlytherin* mago = magos_slytherin[i];
		cout <<"------" << "Mago #" << i <<"------"<<endl;
		cout<<"Casa de Mago: Slytherin"<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Liderazgo: "<<mago->getLiderazgo()<<endl;
	}
	//
	for(int i=0; i < magos_ravenclaw.size(); i++) {
		MagoRavenclaw* mago = magos_ravenclaw[i];
		cout <<"------" << "Mago #" << i <<"------"<<endl;
		cout<<"Casa de Mago: Ravenclaw"<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Creatividad: "<<mago->getCreatividad()<<endl;
	}
	//to String Hufflepuff
	for(int i=0; i < magos_hufflepuff.size(); i++) {
		MagoHufflepuff* mago= magos_hufflepuff[i];
		cout <<"------" << "Mago #" << i <<"------"<<endl;
		cout<<"Casa de Mago: Hufflepuff"<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"paciencia: "<<mago->getPaciencia()<<endl;
	}
}

void ClaseHogwarts::promedio_habilidades_por_casa(int prom1,int prom2,int prom3,int prom4){
		double promastucia;
		double prominteligencia;
		double promlealtad;
		double promvalentia;
		double promAtrevimiento;
		//Promedio segunda casa
		double promastucia2;
		double prominteligencia2;
		double promlealtad2;
		double promvalentia2;
		double promliderazgo;
		//Promedio Tercera casa
		double promastucia3;
		double prominteligencia3;
		double promlealtad3;
		double promvalentia3;
		double promhufflepuff;
		//Promedio Cuarta casa
		double promastucia4;
		double prominteligencia4;
		double promlealtad4;
		double promvalentia4;
		double promcreatividad;
		//
		for(int i=0;i < magos_gryffindor.size();i++){
			MagoGryffindor* mago = magos_gryffindor[i];
		    promastucia += mago->getAstucia();
			prominteligencia+=mago->getInteligencia();
			promlealtad+=mago->getLealtad();
			promvalentia+=mago->getValentia();
			promAtrevimiento+=mago->getAtrevimiento();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Gryffindor: "<<endl;
		cout<<"Cantidad Magos: "<<prom1<<endl;
		cout<<"Astucia: "<<promastucia/prom1<<endl;
		cout<<"Inteligence: "<<prominteligencia/prom1<<endl;
		cout<<"Lealtad: "<<promlealtad/prom1<<endl;
		cout<<"Valentia: "<<promvalentia/prom1<<endl;
		cout<<"atrevimiento: "<<promAtrevimiento/prom1<<endl;
		cout<<"---------------------------------"<<endl;
		//2
			for(int i=0;i < magos_slytherin.size();i++){
			MagoSlytherin* mago= magos_slytherin[i];
		    promastucia2+=mago->getAstucia();
			prominteligencia2+=mago->getInteligencia();
			promlealtad2+=mago->getLealtad();
			promvalentia2+=mago->getValentia();
			promliderazgo+=mago->getLiderazgo();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Slytherin: "<<endl;
		cout<<"Cantidad Magos: "<<prom2<<endl;
		cout<<"Astucia: "<<promastucia2/prom2<<endl;
		cout<<"Inteligence: "<<prominteligencia2/prom2<<endl;
		cout<<"Lealtad: "<<promlealtad2/prom2<<endl;
		cout<<"Valentia: "<<promvalentia2/prom2<<endl;
		cout<<"Liderazgo: "<<promliderazgo/prom2<<endl;
		cout<<"---------------------------------"<<endl;
		//3
		for(int i=0;i < magos_hufflepuff.size();i++){
			MagoHufflepuff* mago = magos_hufflepuff[i];
		    promastucia3+=mago->getAstucia();
			prominteligencia3+=mago->getInteligencia();
			promlealtad3+=mago->getLealtad();
			promvalentia3+=mago->getValentia();
			promhufflepuff+=mago->getPaciencia();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Hufflepuff: "<<endl;
		cout<<"Cantidad Magos: "<<prom3<<endl;
		cout<<"Astucia: "<<promastucia3/prom3<<endl;
		cout<<"Inteligence: "<<prominteligencia3/prom3<<endl;
		cout<<"Lealtad: "<<promlealtad3/prom3<<endl;
		cout<<"Valentia: "<<promvalentia3/prom3<<endl;
		cout<<"Paciencia: "<<promhufflepuff/prom3<<endl;
		cout<<"---------------------------------"<<endl;
		//4
		for(int i=0;i < magos_ravenclaw.size();i++){
			MagoRavenclaw* mago = magos_ravenclaw[i];
		    promastucia4+=mago->getAstucia();
			prominteligencia4+=mago->getInteligencia();
			promlealtad4+=mago->getLealtad();
			promvalentia4+=mago->getValentia();
			promcreatividad+=mago->getCreatividad();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Ravenclaw: "<<endl;
		cout<<"Cantidad Magos: "<<prom4<<endl;
		cout<<"Astucia: "<<promastucia4/prom4<<endl;
		cout<<"Inteligence: "<<prominteligencia3/prom4<<endl;
		cout<<"Lealtad: "<<promlealtad4/prom4<<endl;
		cout<<"Valentia: "<<promvalentia4/prom4<<endl;
		cout<<"Paciencia: "<<promcreatividad/prom4<<endl;
		cout<<"---------------------------------"<<endl;
}
