#include <iostream>
using namespace std;

class Estudiante {
    private:
        string nombre;
        int edad;
    public:
    // Primer constructor por defecto
        Estudiante() {
            nombre = "Sin nombre";
            edad = 0;
            cout << "Se creo un estudiante constructor por defecto";
        }
    // Segundo constructor con parametros
        Estudiante(string n, int e) {
            nombre = n;
            edad = e;
            cout << "Se creo un estudiante con datos (constructor con parametros)" << endl;
        }
    // Metodo para mostrar la informacion
        void mostrar() {
            cout << "Nombre: " << nombre << ". Edad: " << edad << endl;
        }

};

int main() {
    Estudiante estudiante1; // Constructor por defecto
    Estudiante estudiante2 ("Alan", 20); // Constructor con parametros

    estudiante1.mostrar();  // Metodo para mostrar
    estudiante2.mostrar(); // Metodo para mostrar

    return 0;
}