#include <iostream>
#include "paletas.h"

#ifndef HIELERA_H_
#define HIELERA_H_
using namespace std;

class Hielera{
    private:
        vector<Paletas*> paletash;
    public:
        Hielera(){}
        void agregar(Paletas* pa){
            paletash.push_back(pa);
        }

        void mostrarPaletas(){
            cout<<" "<<endl;
            cout<<"-----HIELERA-----"<<endl;
            for (int i=0; i < paletash.size(); i++){
                paletash[i]->fabricarPaleta();
                cout<<"- - - - - - - - - -"<<endl;
            }
        
        void removerPaleta(Paletas paleta);
        }
};
//metodo remover paleta pendiente
#endif
