#include <iostream>
#include <string>
using namespace std;

class Persona { // Clase persona
    public:
    string nombre;
    int edad;
    string genero;

    void mostrarDatos() { // Método para mostrar los datos
        cout << "Introduzca su nombre: ";
        cin >> nombre;

        cout << "Introduzca su edad: ";
        cin >> edad;

        cout << "Introduzca su genero: ";
        cin >> genero;

        cout << "Tu nombre es: " << nombre << '\n';
        cout << "Tu edad es: " << edad << '\n';
        cout << "Tu genero es: " << genero << '\n';
    }

     ~Persona() { // Destructor que despide al usuario al concluir el programa
        cout << "Gracias por usar el programa " << nombre << '\n';
     }
};   

int main() {
    Persona persona1;
    persona1.mostrarDatos();

    return 0;
}