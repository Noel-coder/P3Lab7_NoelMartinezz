#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoGryffindor.h"
#include "MagoRavenclaw.h"
#include <vector>
#include <iostream>
using namespace std;
class ClaseHogwarts
{
	public:
		ClaseHogwarts();
		~ClaseHogwarts();
		void promedio_habilidades_por_casa(int,int,int,int);
		void toString();
	protected:
		int anio;
		vector <MagoSlytherin*> magos_slytherin;
		vector <MagoHufflepuff*> magos_hufflepuff;
		vector <MagoGryffindor*> magos_gryffindor;
		vector <MagoRavenclaw*> magos_ravenclaw;
};

#endif