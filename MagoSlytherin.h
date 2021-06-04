#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoSlytherin : public Mago
{
	public:
		MagoSlytherin();
		~MagoSlytherin();
		int getLiderazgo();
		void setLiderazgo(int);
	protected:
		int liderazgo;
};

#endif