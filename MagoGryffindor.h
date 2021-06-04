#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoGryffindor : public Mago
{
	public:
		MagoGryffindor();
		~MagoGryffindor();
		int getAtrevimiento();
		void setAtrevimiento(int);
	protected:
		int atrevimiento;
};

#endif