#include "Arquero.h"

Arquero::Arquero() : Personaje("Arquero") {
	
}

void Arquero::Atacar (Personaje & otro) {
	if (m_mana >= 3 && otro.VerVida()>1){
		otro.RecibirAtaque(3);
		m_mana -= 3;
	}else{
	Personaje::Atacar(otro);}
}

