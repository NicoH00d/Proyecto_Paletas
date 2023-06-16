/*
 * Proyecto Paletas clase paletas
 * Nicolas Hood Figueroa
 * A01705857
 * 16 de Junio de 2023
 * version : 1
 * Esta clase define los objetos de tipo paletas que heredan
 * las clases de paleta_agua y paleta_leche
 */

#include <iostream>
#include <vector> //biblioteca necesaria a usar 
#ifndef PALETAS_H_
#define PALETAS_H_
using namespace std;
//declaracion de la clase Paletas que es abstracta
class Paletas{
    protected:
    //vaiables iniciales
        string sabor;
        string color;
        vector<string> ingredientes; //vector que guardara los ingredientes

    public:
        //constructor default
        Paletas(): sabor(" "), color("Hielo"), ingredientes{"Palito","azucar"}{};
        Paletas(string sabor_, string color_, vector<string>ingre):
        sabor(sabor_), color(color_), ingredientes(ingre){};
        //getters
        string getSabor(){
            return sabor;
        }
        string getColor(){
            return color;
        }
        vector<string> getIngredientes(){
            return ingredientes;
        }
        //setters
        void setSabor(string sab){
            sabor = sab;
        }
        void setColor(string col){
            color = col;
        }
        void setIngredinetes(const vector<string>& ingre){
            ingredientes = ingre;
        }
        //metodos publicos
        void agregarIngrediente(string ingrediente);
        void removerIngrediente(string ingrediente);
        virtual void fabricarPaleta()=0; //método abstracto para ser sobreescrito


};
//método para agregar ingredientes al vector
void Paletas::agregarIngrediente(string ingrediente){
    ingredientes.push_back(ingrediente);
}
//método para remover ingredientes del vector
void Paletas::removerIngrediente(string ingrediente){
    for (auto it = ingredientes.begin(); it != ingredientes.end(); ++it) {
       if (*it == ingrediente) {
            ingredientes.erase(it);
            break;
       }//busca un elemento específico en la lista ingredientes y lo elimina
    } 
}
//método para imprimir los datos de las paletas que es sobreescrito
void Paletas::fabricarPaleta(){
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


#endif //PALETASS_H_
