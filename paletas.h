
#include <iostream>
#include <vector>
#ifndef PALETAS_H_
#define PALETAS_H_
using namespace std;

class Paletas{
    protected:
    //vaiables iniciales
        string sabor;
        string color;
        vector<string> ingredientes; //lista que guardara los ingredientes

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
        //metodos
        void agregarIngrediente(string ingrediente);
        void removerIngrediente(string ingrediente);
        virtual void fabricarPaleta(); //virutal para claces


};

void Paletas::agregarIngrediente(string ingrediente){
    ingredientes.push_back(ingrediente);
}
void Paletas::removerIngrediente(string ingrediente){
    for (auto it = ingredientes.begin(); it != ingredientes.end(); ++it) {
       if (*it == ingrediente) {
            ingredientes.erase(it);
            break;
       }
    }
}
void Paletas::fabricarPaleta(){
    cout << "Sabor: " << sabor << endl;
    cout << "Color: " << color << endl;
    cout << "Ingredientes: ";
    for (const auto& ingrediente : ingredientes) {
            cout << ingrediente << ", "; //realiza ciclo para imprimir cada ingrediente de la lista
            }
    cout << " " <<endl;
}
//metodo para agregar paleta a la hielera

#endif
