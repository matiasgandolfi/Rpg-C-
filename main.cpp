#include<iostream>
#include "Juego.h"


#include <iomanip>
using namespace std;

/*
*Hay tres tipos de personajes: arquero, caballeros y magos

*El juego comienza con N personajes, cada uno con un cantidad
inicial de vida, y de mana

*En cada turno, se eleigen dos personajes al azar,
*Uno ataca al otro, quitandole un punto de vida,
* hasta que quede uno solo vivo

*El mana de cada personaje se regenera con el paso del tiempo

*Cada personaje, en su turno, puede consumir una cierta cantidad de
mana para realizar un ataque especial segun su tipo

*/



/*
	Ejemplo de Juego

------------------------------------------------

*El arquero puede efectuar unndisparo con flecha envenenada
que /quita 3 puntos de vida/. Esta accion consume 
3 unidades de mana

*El /caballero/ puede utilizar su espada para /quitarle
la mitad de su energia al enemigo en un solo movimiento,
consumiendo para ello /8 unidades de mana/

*El mago puede /absorver la unidad de energia que le
quita/ a su enemigo, consumiendo en esta accion 5
unidades de mana


*/

/*-------------------Funciones----------------------*/

void ListarPersonajes(const Juego &j){
	for(int i = 0; i<j.CantPersonajes();++i){
		
		
		const Personaje &p = j.VerPersonaje(i);
		
		if(p.EstaVivo()){
		
			cout<<setw(3) << right << i+1<<" ";
			cout<<setw(10) << left <<  p.VerTipo();
			cout << setw(3) << left << p.VerMana();
			cout << setw(3) << left << p.VerVida();
			
			cout<<endl;
		}
	}
	cin.get();
}

void MostrarGanador(const Juego &j){
	int g = j.VerGanador();
	
	const Personaje &p = j.VerPersonaje(g);
	
	cout<<"Gano el personaje" << p.VerTipo() << "nro" << g+1<<endl;
}




void MostrarAtaque(const Juego &j, InfoAtaque info){
	
	const Personaje &p1= j.VerPersonaje(info.atacante);
	const Personaje &p2= j.VerPersonaje(info.atacado);
	
	cout<<"El personaje "<< p1.VerTipo() <<" nro "<< info.atacante+1
		<<" ataca al "<< p2.VerTipo() <<" nro "<< info.atacado+1;
	if(not p2.EstaVivo())cout<<"y lo liquida"<<endl;
	else cout<<", pero sobrevive" <<endl;
};






/*-----------------Main----------------------------*/
int main (int argc, char *argv[]) {

	//Esta formula sirve para que los numeros aleatorios varien
	srand(time(0));
	Juego j(8);
	
	/*
	
	Realizar en el mail los turnos te permite controlar como se
	se va desarrollando el juego
	
	*/
	do{
		ListarPersonajes(j);	//cout
		InfoAtaque info = j.Turno();
		MostrarAtaque(j, info);
	}while(! j.Terminado());
	MostrarGanador(j);	//cout - por lo tanto no va dentro de la clase juego
	
	return 0;
}

