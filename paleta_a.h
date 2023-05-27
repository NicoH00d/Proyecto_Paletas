#include <iostream>
#include "paletas.h"
#ifndef PALETAS_A_H_
#define PALETAS_A_H_
using namespace std;

class Paleta_agua: public Paletas{
    private:
        string cant_agua;

    public:
    //constructor default y sobrecarga
        Paleta_agua():Paletas(" ","transparente", {"Palito","azucar", "agua"}){};
        Paleta_agua(string sabor, string color, vector<string> ingredientes, string agua):
        Paletas (sabor, color, ingredientes), cant_agua(agua){};

        string getCant_agua(){
            return cant_agua;
        }
        void setCant_agua(string agua_){
            cant_agua=agua_;
        }

    //sobreescritura de metodo
        void fabricarPaleta();
};
void Paleta_agua::fabricarPaleta(){
    cout << "Paleta de agua" << endl;
    cout << "Sabor: " << sabor << endl;
    cout << "Color: " << color << endl;
    cout << "Ingredientes: ";
    for (const auto& ingrediente : ingredientes) {
            cout << ingrediente << ", "; //realiza ciclo para imprimir cada ingrediente de la lista
            }   
    cout << " " <<endl;
}

#endif
