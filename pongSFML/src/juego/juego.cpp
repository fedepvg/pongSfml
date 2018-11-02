#include "juego.h"

#include "SFML\Graphics.hpp"

namespace Juego {
	using namespace sf;

	static void inicializar();
	static void actualizar();
	static void dibujar();
	static void desinicializar();

	bool enJuego = true;
	static RenderWindow ventana(VideoMode(900, 600), "Pong");

	void inicializar() {

	}

	void actualizar() {
		actualizarJugador();
		actualizarBola();
	}

	void dibujar() {
		dibujarJugador();
		dibujarBola();
	}

	void desinicializar() {

	}

	void ejecutar() {
		inicializar();

		Event evento;
		while (enJuego||ventana.isOpen()) {
			while (ventana.pollEvent(evento))
			{
				if (evento.type == Event::Closed)
					ventana.close();
			}
			actualizar();
			dibujar();
		}
		desinicializar();
	}
}