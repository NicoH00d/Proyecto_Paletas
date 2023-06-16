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
#ifndef PALETAS_A_H_
#define PALETAS_A_H_
using namespace std;

//Hereda paletas
class Paleta_agua: public Paletas{
    private:
        string cant_agua;
    public:
    //constructor default y sobrecarga
        Paleta_agua():Paletas(" ","transparente", {"Palito","azucar", "agua"}){};
        Paleta_agua(string sabor, string color, vector<string> ingredientes, string agua):
        Paletas (sabor, color, ingredientes), cant_agua(agua){};
    //metodos
        string getCant_agua(){
            return cant_agua;
        }
        void setCant_agua(string agua_){
            cant_agua=agua_;
        }
        //sobreescritura de metodo
        void fabricarPaleta();
};
//sobreescritura de metodo abstracto de la clase paleta
void Paleta_agua::fabricarPaleta(){
    cout << "Paleta de agua" << endl;
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
