#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff(int _paciencia, int _astucia,int _inteligencia,int _lealtad, int _valentia):Mago(_astucia,_inteligencia, _lealtad, _valentia)
{
	this->paciencia = _paciencia;
}

MagoHufflepuff::~MagoHufflepuff()
{
}

string MagoHufflepuff::toString(){
	
}

int MagoHufflepuff::getPaciencia(){
	return this->paciencia;
}

void MagoHufflepuff::setPaciencia(int _paciencia){
	this->paciencia = _paciencia;
}