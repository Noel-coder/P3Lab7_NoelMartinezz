#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff()
{
	srand(time(NULL));
	paciencia = rand() % 20;
	paciencia = paciencia + 80;
}

MagoHufflepuff::~MagoHufflepuff()
{
}

int MagoHufflepuff::getPaciencia(){
	return this->paciencia;
}

void MagoHufflepuff::setPaciencia(int _paciencia){
	this->paciencia = _paciencia;
}