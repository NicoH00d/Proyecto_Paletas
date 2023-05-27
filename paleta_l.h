#include <iostream>
#include "paletas.h"
#ifndef PALETAS_L_H_
#define PALETAS_L_H_
using namespace std;

class Paleta_leche: public Paletas{
    private:
        string cant_leche;

    public:
    //constructor default y sobrecarga
        Paleta_leche():Paletas(" ","transparente", {"Palito","azucar", "leche"}){};
        Paleta_leche(string sabor, string color, vector<string> ingredientes, string leche):
        Paletas (sabor, color, ingredientes), cant_leche(leche){};

        string getCant_leche(){
            return cant_leche;
        }
        void setCant_agua(string leche_){
            cant_leche=leche_;
        }
        //sobreescritura de metodo
        void fabricarPaleta();
};
void Paleta_leche::fabricarPaleta(){
    cout << "Paleta de Leche" << endl;
    cout << "Sabor: " << sabor << endl;
    cout << "Color: " << color << endl;
    cout << "Ingredientes: ";
    for (const auto& ingrediente : ingredientes) {
            cout << ingrediente << ", "; //realiza ciclo para imprimir cada ingrediente de la lista
            }   
    cout << " " <<endl;
}


#endif