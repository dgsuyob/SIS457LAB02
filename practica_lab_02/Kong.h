#pragma once
class Kong
{private:
    int color;
    float tamaño;
    float fuerza_b;
    float tiempo;
    int piel;
public:
    Kong();
    void lanzar();
    void animacion();
    bool estado();
};

