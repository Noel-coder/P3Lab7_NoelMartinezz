#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin(int _liderazgo, int _astucia,int _inteligencia,int _lealtad, int _valentia):Mago(_astucia,_inteligencia, _lealtad, _valentia)
{
	this->liderazgo = _liderazgo;
}

MagoSlytherin::~MagoSlytherin()
{
}

string MagoSlytherin::toString(){
	
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}

void MagoSlytherin::setLiderazgo(int _liderazgo){
	this->liderazgo = _liderazgo;
}
