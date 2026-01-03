#include <iostream>
using namespace std;
// try: bloque de codigo que puede fallar
// throw: lanza el error o sea interrumpe lo que esta haciendo en este momento
// catch: captura el error y lo maneja

    double dividir(double a , double b) { // Funcion que divide dos numeros
        if(b == 0) {
            throw "Error = division entre cero no permitida"; // Lanza un error si b es igual a 0
        }
        return a / b; // Si no hay error devuelve el resultado de la division
    }

int main() {

    double x, y; // Dos variables para almacenar los numeros a dividir
    cout << "Ingresa dos numero: ";
    cin >> x >> y;

    try { // Bloque de codigo que puede fallar
        double resultado = dividir (x,y);
        cout << "Resultado: " << resultado << endl;
    } catch (const char* error){ // Captura el error
        cout << error << '\n';
    }
}