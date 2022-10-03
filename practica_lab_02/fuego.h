#pragma once
class fuego
{
private:
	int color;
	int movimientoX;
	int movimientoY;
	int daño;
public:
	fuego();
	void cambioColor();
	void velocidad();
	void movimientoX();
	void movimientoY();
	void quemar();
};

