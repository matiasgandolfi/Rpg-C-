#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>

class Personaje {
public:
	Personaje(std::string tipo);
	std::string VerTipo() const;
	int VerMana() const;
	int VerVida() const;
	virtual void Atacar(Personaje &otro);
	bool EstaVivo() const;
	void RegenerarMana();
	void RecibirAtaque(int cuanto);
	virtual ~Personaje() {};
	
protected:		//Es como amistad pero solo para los hijos
	std::string m_tipo;
	int m_vida, m_mana;
};

#endif

