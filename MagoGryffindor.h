#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoGryffindor : public Mago
{
	public:
		MagoGryffindor(int,int,int,int,int);
		~MagoGryffindor();
		int getAtrevimiento();
		void setAtrevimiento(int);
	protected:
		int atrevimiento;
};

#endif