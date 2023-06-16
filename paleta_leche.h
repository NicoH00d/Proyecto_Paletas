/*
 * Proyecto Paletas clase paleta_agua
 * Nicolas Hood Figueroa
 * A01705857
 * 16 de Junio de 2023
 * version : 1
 * Esta clase hereda los atributos y metodos de la clase paletas
 */
#include <iostream>
#include "paletas.h" //biblioteca con objetos a usar
#ifndef PALETAS_L_H_
#define PALETAS_L_H_
using namespace std;

//Hereda paletas
class Paleta_leche: public Paletas{
    private:
        string cant_leche;
    public:
    //constructor default y sobrecarga
        Paleta_leche():Paletas(" ","transparente", {"Palito","azucar", "leche"}){};
        Paleta_leche(string sabor, string color, vector<string> ingredientes, string leche):
        Paletas (sabor, color, ingredientes), cant_leche(leche){};
    //métodos
        string getCant_leche(){
            return cant_leche;
        }
        void setCant_agua(string leche_){
            cant_leche=leche_;
        }
        //sobreescritura de metodo
        void fabricarPaleta();
};
//sobreescritura de metodo abstracto de la clase paleta
void Paleta_leche::fabricarPaleta(){
    cout << "Paleta de Leche" << endl;
    cout << "Sabor: " << sabor << endl;
    cout << "Color: " << color << endl;
    cout << "Ingredientes: ";
    for (const auto& ingrediente : ingredientes) {
            cout << ingrediente << ", "; //realiza ciclo para imprimir cada ingrediente de la lista
            }
    /*
    *const indica que el valor del ingrediente no cambiará dentro del bucle
    *auto deduce  el tipo de dato de los elementos de la lista.
    *& declara como una referencia constante al elemento de la lista ingredientes
    */   
    cout << " " <<endl;
}


#endif