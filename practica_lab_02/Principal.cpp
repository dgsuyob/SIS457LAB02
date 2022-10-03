#include <iostream>
#include "Personaje.h"
#include "Kong.h"
#include "escenario.h"
#include "Escalera.h"
#include "fuego.h"
#include "Barril.h"
#include "Princesa.h"
using namespace std;
int main() {
	Personaje p;
	Kong k;
	escenario e;
	Escalera es;
	fuego f;
	Barril b;
	Princesa prin;
	p.estado();
	k.animacion();
	e.cambio();
	es.cambiarColor();
	f.quemar();
	b.movimientoX();
	prin.animacion();
	return 0;
}