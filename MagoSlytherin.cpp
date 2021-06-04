#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin()
{
	srand(time(NULL));
	liderazgo = rand() % 20;
	liderazgo = liderazgo + 80;
}

MagoSlytherin::~MagoSlytherin()
{
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}

void MagoSlytherin::setLiderazgo(int _liderazgo){
	this->liderazgo = _liderazgo;
}
