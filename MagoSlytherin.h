#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoSlytherin : public Mago
{
	public:
		MagoSlytherin(int,int,int,int,int);
		~MagoSlytherin();
		int getLiderazgo();
		void setLiderazgo(int);
		virtual string toString();
	protected:
		int liderazgo;
};

#endif