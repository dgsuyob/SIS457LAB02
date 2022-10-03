#pragma once
class Personaje
{
private:
    int color;
    int piel;
    int velocidad;
    bool fin;
    int movimiento_x;
    int movimiento_y;
    int salto;
public:
    Personaje();
    void saltar();
    void movimientoX();
    void movimientoY();
    bool estado();
};

