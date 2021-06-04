#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoRavenclaw : public Mago
{
	public:
		MagoRavenclaw();
		~MagoRavenclaw();
		int getCreatividad();
		void setCreatividad(int);
	protected:
		int creatividad;
};

#endif