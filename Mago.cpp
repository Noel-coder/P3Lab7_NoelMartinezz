#include "Mago.h"

Mago::Mago()
{
	srand(time(NULL));
	astucia = rand() % 100;
	inteligencia = rand() % 100;
	lealtad = rand() % 100;
	valentia = rand() % 100;
}

Mago::~Mago()
{
}

int Mago::getAstucia(){
	return this->astucia;
}

void Mago::setAstucia(int _astucia){
	this->astucia = _astucia;
}

int Mago::getInteligencia(){
	return this->inteligencia;
}

void Mago::setInteligencia(int _inteligencia){
	this->inteligencia = _inteligencia;
}

int Mago::getLealtad(){
	return this->lealtad;
}

void Mago::setLealtad(int _lealtad){
	this->lealtad = _lealtad;
}

int Mago::getValentia(){
	return this->valentia;
}

void Mago::setValentia(int _valentia){
	this->valentia = _valentia;
}