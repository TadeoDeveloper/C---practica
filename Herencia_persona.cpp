#include <iostream>
#include <string>
using namespace std;

class Persona {
    protected:
        string nombre;
        int edad;

    public:
        Persona(string n, int e) : nombre(n), edad(e) {}

        void mostrarInfo() {
            cout << " Nombre: " << nombre 
                << " | Edad: " << edad << '\n';
        }
};


class Alumno: public Persona {
    private:
        string carrera;

        public:
            Alumno(string n, int e, string c) : Persona(n,e), carrera(c) {}

    void mostrarInfo() {
        cout << "Alumno - >";
        Persona::mostrarInfo();
        cout << "Carrera: " << carrera << '\n';
    }
};

class Maestro: public Persona {
    private:
        string materia;

        public:
            Maestro(string n, int e, string m) : Persona(n,e), materia(m) {}

    void mostrarInfo() {
        cout << "Maestro - >";
        Persona::mostrarInfo();
        cout << "Materia: " << materia << '\n';
    }
};

class Director: public Persona {
    private:
        int tiempoDeCargo;

        public:
            Director(string n, int e, int c) : Persona(n,e), tiempoDeCargo(c) {}

    void mostrarInfo() {
        cout << "Director - >";
        Persona::mostrarInfo();
        cout << "tiempoDeCargo: " << tiempoDeCargo << '\n';
    }
};

int main() {
    Alumno a1("Tadeo", 19, "Ingenieria en software");
    Maestro m1("Juan", 40, "Poo");
    Director d1("Pedro", 33, 5);

    a1.mostrarInfo();
    m1.mostrarInfo();
    d1.mostrarInfo();

    return 0;
}