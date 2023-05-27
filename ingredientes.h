#include <iostream>
using namespace std;

class Ingrediente{
    private:
        string nombre;
        int cantidad;

    public:
        string getNombre(){
            return nombre;
        }
        int getCantidad(){
            return cantidad;
        }
        string setNombre(string nom){
            nombre=nom;
        }
        string setCantidad(int cant){
            cantidad=cant;
        }
};