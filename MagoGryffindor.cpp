#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor(int _atrevimiento, int _astucia,int _inteligencia,int _lealtad, int _valentia):Mago(_astucia,_inteligencia, _lealtad, _valentia)
{
	this->atrevimiento = _atrevimiento;
}

MagoGryffindor::~MagoGryffindor()
{
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

void MagoGryffindor::setAtrevimiento(int _atrevimiento){
	this->atrevimiento = _atrevimiento;
}