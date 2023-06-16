/*
 * Proyecto Paletas clase hielera
 * Nicolas Hood Figueroa
 * A01705857
 * 16 de Junio de 2023
 * version : 1
 * Esta clase recupera los objetos de tipo paleta para almacenarlos y contiene 
 * metodos para la administracion de estas como el de agregar para agregar paletas,
 * el de mostrar paletas para saber el contenido de la hielera y el de remover
 * paletas en caso de haber vendido alguna. Estos metodos podran ser utilizados
 * en el main.
 */
#include <iostream>
#include "paletas.h" //biblioteca con los objetos a usar
#ifndef HIELERA_H_
#define HIELERA_H_
using namespace std;

class Hielera{
    private:
        //declaración de variable paletash que es un vector de punteros a objetos Paletas.
        vector<Paletas*> paletash; 
    public:
        Hielera(){}
        void agregar(Paletas* pa){ //metodo para agregar paletas a la hielera
            paletash.push_back(pa);
        }

        void mostrarPaletas(){ //metodo para mostra paletas en la hielera
            cout<<" "<<endl;
            cout<<"-----HIELERA-----"<<endl;
            for (int i=0; i < paletash.size(); i++){
                paletash[i]->fabricarPaleta(); //ciclo para imprimir cada objeto en hielera
                cout<<"- - - - - - - - - -"<<endl;
            }       
        }
};
#endif
