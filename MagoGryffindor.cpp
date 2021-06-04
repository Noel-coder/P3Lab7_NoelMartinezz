#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor()
{
	srand(time(NULL));
	atrevimiento = rand() % 20;
	atrevimiento = atrevimiento + 80;
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