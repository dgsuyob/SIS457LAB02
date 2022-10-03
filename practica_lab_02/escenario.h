#pragma once
class escenario
{
private:
	int nivel;
	int puntuacion;
	bool estado;
public:
	escenario();
	void cambio();
	void incremento();
	bool estado();
};

