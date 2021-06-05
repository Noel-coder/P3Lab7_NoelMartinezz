#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include "Mago.h"
#include <ctime>
#include <random>

class MagoHufflepuff : public Mago
{
	public:
		MagoHufflepuff(int,int,int,int,int);
		~MagoHufflepuff();
		int getPaciencia();
		void setPaciencia(int);
		virtual string toString();
	protected:
		int paciencia;
};

#endif