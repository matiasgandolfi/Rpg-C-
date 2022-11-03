#include "Mago.h"

Mago::Mago() : Personaje("Mago") {
	
}

void Mago::Atacar (Personaje & otro) {
	if(m_mana >= 5){
		otro.RecibirAtaque(1);
		m_mana -= 5; ++m_vida;
	}else{
		Personaje::Atacar(otro);
	}
}

