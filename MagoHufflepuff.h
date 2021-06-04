#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoHufflepuff : public Mago
{
	public:
		MagoHufflepuff();
		~MagoHufflepuff();
		int getPaciencia();
		void setPaciencia(int);
	protected:
		int paciencia;
};

#endif