#include <iostream>
using namespace std;

// Una clase es el molde o plantilla que define las caracteristicas de un objeto
// Un objeto es una instancia de una clase 

class Persona {
    private: // Solo es accesible dentro de la clase 
    string nombre;
    string ocupacion;

    public: // Accesible desde cualquier parte del codigo
    void setOcupacion (string n) {
        ocupacion = n;
    }

    void setNombre (string n) { // Declaramos un metodo publico llamado setNombre que recibe un parametro n de tipo string. El setter permite asignar un valor al atributo privado
        nombre = n;
    }

    void saludar () {
        cout << "Hola soy " << nombre << endl;
    }

    void comer () {
        cout << "Hola soy " << nombre << " estoy comiendo " << '\n';
    }

    void DecirDedicacion () {
        cout << "Hola soy " << nombre << " y soy " << ocupacion << endl;
    }

};

// Programa principal
int main() 
{
   Persona p1;
   Persona p2;
   Persona p3;
   Persona p4;

   p1.setNombre("Tadeo");
   p2.setNombre("Arina");
   p3.setNombre("Rubi");
   p4.setNombre("Alan");

   p1.setOcupacion("Ingeniero de software");
   p2.setOcupacion("Ingeniera en sistemas computacionales");
   p3.setOcupacion("Doctora");
   p4.setOcupacion("Ingeniero en desarrollo de videojuegos");

   p1.saludar();
   p2.saludar();
   p3.saludar();
   p4.saludar();

   p1.comer();
   p2.comer();
   p3.comer();
   p4.comer();

   p1.DecirDedicacion();
   p2.DecirDedicacion();
   p3.DecirDedicacion();
   p4.DecirDedicacion();


    return 0;
}