#ifndef CABALLERO_H
#define CABALLERO_H
#include "Personaje.h"

class Caballero : public Personaje {
public:
	Caballero();
	void Atacar(Personaje &otro) override;	//override obliga a pisar el metodovirtual
private:
};

#endif

