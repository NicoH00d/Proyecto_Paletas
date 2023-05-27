#include <iostream>
#include "paletas.h"

#ifndef HIELERA_H_
#define HIELERA_H_
using namespace std;

class Hielera{
    private:
        vector<Paletas> paletas;

    public:
        Hielera(){}

        void agregarPaleta(Paletas paleta);
        void removerPaleta(Paletas paleta);
        void mostrarPaletas();
        



};
void Hielera::agregarPaleta(Paletas paleta){
        paletas.push_back(paleta);
}
//metodo remover paleta pendiente
//metodo mostrarpaletas pendiente
#endif