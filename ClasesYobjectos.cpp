#include <iostream>
using namespace std;

// Una clase es el molde o plantilla que define las caracteristicas de un objeto
// Un objeto es una instancia de una clase 

class Automovil {
    public: // Tipo de acceso

    // Atributos del objeto
    string marca; // Variable string llamada marca
    string color; // Variable string llamada color

    // Metodos
    void encender() {
        cout << "El auto se prendio" << '\n';
    }

};

// Programa principal
int main() 
{
    Automovil chevy;

    chevy.marca = "Chevrolet";
    chevy.color = "Rojo";

    chevy.encender();

    cout << "Marca: " << chevy.marca << endl;
    cout << "Color: " << chevy.color << endl;

    return 0;
}