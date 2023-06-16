/*
 * Proyecto Paletas fabricacion (main)
 * Nicolas Hood Figueroa
 * A01705857
 * 16 de Junio de 2023
 * version : 1
 * Este programa permite crear paletas de agua y leche, y nos permite
 * guardarlas en una hielera para administrar el inventario de paletas.
 * Este programa esta adaptado a los requisitos de la clase de Programación 
 * orientada a objetos.
 */
#include "paleta_agua.h"
#include "paleta_leche.h"
#include "hielera.h" //bibliotecas con objetos creados para el proyecto
#include <iostream>
using namespace std;

int main(){
// creación de objetos de prueba
cout<<"--- PRUEBAS ---"<<endl;
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
    //Creación del inventario hielera
    Hielera hielera;

    
    //Crear paleta aplicando polimorfismo
    Paletas * paleta_choco = new Paleta_leche();
    paleta_choco->setSabor("Chocolate");
    paleta_choco->setColor("cafe");
    paleta_choco->agregarIngrediente("Chocolate");

    //agregar paleta a la hielera
    hielera.agregar(paleta_choco);

    //Crear paleta aplicando polimorfismo
    Paletas * paleta_jamaica = new Paleta_agua();
    paleta_jamaica->setSabor("Jamaica");
    paleta_jamaica->setColor("Rojo Oscuro");
    paleta_jamaica->agregarIngrediente("jamaica");
    paleta_jamaica->agregarIngrediente("Mas azucar");

    //agregar paleta a la hielera
    hielera.agregar(paleta_jamaica);

    cout<<"Esto es lo que tienes en tu hielera"<<endl;
    //Muestra el contenido de la hielera
    hielera.mostrarPaletas();

    cout<<"Podemos remover el ingrediente de mas azucar de la paleta de jamaica:"<<endl;
    //remueve ingrediente
    paleta_jamaica->removerIngrediente("Mas azucar");
    //fabricarPaleta imprime datos de la paleta
    paleta_jamaica->fabricarPaleta();

    //usuario crea paleta
    cout<<"\n";
    cout<<"EJEMPLO DE FUNCIONAMIENTO"<<endl;
    cout<<"Has tu paleta"<< endl;
    cout<<"Elige entre opcion 1 y 2:"<< endl;
    cout<<"1. Paleta de agua\n2. Paleta de leche\n"<<endl;
    int opcion; cin>>opcion;
    while (opcion != 1 and opcion != 2){
        cout<<"ingresa un dato valido\n"; cin>>opcion;
    }
    if(opcion == 1){
        cout<<"Paleta de agua"<<endl;
        Paletas * paleta1 = new Paleta_agua();
        cout<<"Que sabor?"<<endl; string sabor; cin>>sabor; 
        paleta1 -> setSabor(sabor);
        cout<<"Que color sera?"<<endl; string color; cin>>color; 
        paleta1 -> setColor(color);
        cout<<"Agrega el ingrediente especial"<<endl; string ingrediente;
        cin>>ingrediente; 
        paleta1 -> agregarIngrediente(ingrediente);
        cout<<"Tu paleta:"<<endl;
        paleta1->fabricarPaleta();
        cout<<"Deseas agregarla a la hielera?"<<endl;
        cout<<"1 Si\n2 No"<<endl;
        int deci; cin>>deci;
        while (deci != 1 and deci != 2){
            cout<<"ingresa un dato valido\n"; cin>>deci;}
        if (deci == 1){hielera.agregar(paleta1);}
        if(deci == 2){cout<<"Bueno"<<endl;}
    }
    if(opcion == 2){
        cout<<"Paleta de Leche"<<endl;
        Paletas * paleta2 = new Paleta_leche();
        cout<<"Que sabor?"<<endl; string sabor; cin>>sabor; 
        paleta2 -> setSabor(sabor);
        cout<<"Que color sera?"<<endl; string color; cin>>color; 
        paleta2 -> setColor(color);
        cout<<"Agrega el ingrediente especial"<<endl; string ingrediente;
        cin>>ingrediente; 
        paleta2 -> agregarIngrediente(ingrediente);
        cout<<"Tu paleta:"<<endl;
        paleta2->fabricarPaleta();
        cout<<"Deseas agregarla a la hielera?"<<endl;
        cout<<"1. Si\n2. No"<<endl;
        int deci; cin>>deci;
        while (deci != 1 and deci != 2){
            cout<<"ingresa un dato valido\n"; cin>>deci;}
        if (deci == 1){hielera.agregar(paleta2);}
        if(deci == 2){cout<<"Bueno"<<endl;}
    }
    cout<<"Quieres ver lo que hay en la hielera?\n1. Si 2. N0"<<endl;
    int h; cin>>h;
    while (h != 1 and h != 2){
        cout<<"ingresa un dato valido\n"; cin>>h;
    }
    if (h==1){hielera.mostrarPaletas();
        cout<<"Gracias por usar la prueba, nos vemos"<<endl;}
    if (h==2){cout<<"Gracias por usar la prueba, nos vemos"<<endl;}
    cout<<"Espera por futuras actualizaciones!"<<endl;
}
