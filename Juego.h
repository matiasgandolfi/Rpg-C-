#ifndef JUEGO_H
#define JUEGO_H
#include <vector>
#include "Personaje.h"

struct InfoAtaque {
	
	int atacante;
	int atacado;	
};


class Juego {
public:
	Juego(int cant_personajes);
	InfoAtaque Turno();
	bool Terminado() const;
	int CantPersonajes() const;
	const Personaje &VerPersonaje(int cual) const;
	int VerGanador() const;
	int SeleccionarUnoVivo(int que_no_sea_justo_este =-1) const;
	~Juego();
private:
	std::vector<Personaje*> m_v;
};

#endif

