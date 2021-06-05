#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoRavenclaw : public Mago
{
	public:
		MagoRavenclaw(int,int,int,int,int);
		~MagoRavenclaw();
		int getCreatividad();
		void setCreatividad(int);
		virtual string toString();
	protected:
		int creatividad;
};

#endif