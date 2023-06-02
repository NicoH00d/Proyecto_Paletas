#include "paletas.h" //borrar despues de las pruebas
#include "paleta_a.h"
#include "paleta_l.h"
#include "hielera.h"

int main(){
//-----------------------Pruebas---------------------------//
    Paletas fresa;
    fresa.setSabor("fresa");
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
//--------------------------------------------------------//
    Hielera hielera;


//polimorfismo aplicado

    //Crear paleta 
    Paletas * paleta_choco = new Paleta_leche();
    paleta_choco->setSabor("Chocolate");
    paleta_choco->setColor("cafe");
    paleta_choco->agregarIngrediente("Chocolate");
    //agregar paleta a la hielera
    hielera.agregar(paleta_choco);
    //Crear paleta
    Paletas * paleta_jamaica = new Paleta_agua();
    paleta_jamaica->setSabor("Jamaica");
    paleta_jamaica->setColor("Rojo Oscuro");
    paleta_jamaica->agregarIngrediente("jamaica");
    paleta_jamaica->agregarIngrediente("Mas azucar");

    //agregar paleta a la hielera
    hielera.agregar(paleta_jamaica);

    //Muestra el contenido de la hielera
    hielera.mostrarPaletas();

    //remueve ingrediente
    paleta_jamaica->removerIngrediente("Mas azucar");
    //fabricarPaleta imprime datos
    paleta_jamaica->fabricarPaleta();



};