#include "paletas.h" //borrar despues de las pruebas
#include "paleta_a.h"
#include "paleta_l.h"
#include "hielera.h"

int main(){
    Paletas fresa;
//esto es prueba
    fresa.setColor("Rojo");
    fresa.agregarIngrediente("fresas");
    fresa.fabricarPaleta();
    fresa.removerIngrediente("azucar");
    fresa.fabricarPaleta();
cout<<"---------------------------------------------"<<endl;
    Paleta_agua mango;
    mango.setSabor("Mango");
    mango.agregarIngrediente("trocitos de mango");
    mango.fabricarPaleta();
cout<<"---------------------------------------------"<<endl;
    Paleta_leche horchata;
    horchata.setSabor("Horchata");
    horchata.agregarIngrediente("Jarabe de Horchata");
    horchata.fabricarPaleta();
cout<<"---------------------------------------------"<<endl;
    Hielera hielera;
    hielera.agregarPaleta(horchata);

};