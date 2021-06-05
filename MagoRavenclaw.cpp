#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw(int _creatividad, int _astucia,int _inteligencia,int _lealtad, int _valentia):Mago(_astucia,_inteligencia, _lealtad, _valentia)
{
	this->creatividad = _creatividad;
}

MagoRavenclaw::~MagoRavenclaw()
{
}

string MagoRavenclaw::toString(){
	
}

int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

void MagoRavenclaw::setCreatividad(int _creatividad){
	this->creatividad = _creatividad;
}