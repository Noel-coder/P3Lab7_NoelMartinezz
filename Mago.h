#ifndef MAGO_H
#define MAGO_H
#include <ctime>
#include <random>
#include <string>
using namespace std;
class Mago
{
	public:
		Mago(int,int,int,int);
		~Mago();
		int getAstucia();
		void setAstucia(int);
		int getInteligencia();
		void setInteligencia(int);
		int getLealtad();
		void setLealtad(int);
		int getValentia();
		void setValentia(int);
		virtual string toString()=0;
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif