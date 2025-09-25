#include <iostream>
using namespace std;

// Una clase es el molde o plantilla que define las caracteristicas de un objeto
// Un objeto es una instancia de una clase 

class Hamburgesa {
    public: // Solo es accesible dentro de la clase 
    string tipo;
    bool conQueso;
    bool conTocino;
    


    void preparar () {
        cout << "Preparando hamburgesa..." << tipo;
        if(conQueso) cout << " Con quesito";
        if(conTocino) cout << " Con tocinito";
        cout << endl;

    }
};

// Programa principal
int main() 
{
  Hamburgesa h1;
  h1.tipo = "Triple carne";
  h1.conQueso = true;
  h1.conTocino = true;

  Hamburgesa h2;
  h2.tipo = "Triple carne";
  h2.conQueso = false;
  h2.conTocino = true;

  h1.preparar();
  h2.preparar();

    return 0;
}