#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw()
{
	srand(time(NULL));
	creatividad = rand() % 20;
	creatividad = creatividad + 80;
}

MagoRavenclaw::~MagoRavenclaw()
{
}

int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

void MagoRavenclaw::setCreatividad(int _creatividad){
	this->creatividad = _creatividad;
}