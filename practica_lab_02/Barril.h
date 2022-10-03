#pragma once
class Barril
{
private:
    int color;
    bool impacto;
    int forma;
    int piel;
    bool especial;
    int movimiento_x;
    int movimiento_y;
public:
    Barril();
    void velocidad();
    void cambiarColor();
    void cambiarPiel();
    void tipoBarril();
    bool quemar();
    void movimientoX();
    void movimientoY();
};

