#include <iostream>
using namespace std;

 double sumar(double a , double b) { // Funcion que suma dos numeros
        
        return a + b; // Devuelve la suma 
    }

double restar(double a , double b) { // Funcion que resta dos numeros
        
        return a - b; // Devuelve la resta 
    }

 double dividir(double a , double b) { // Funcion que divide dos numeros
        if(b == 0) {
            throw "Error = division entre cero no permitida"; // Lanza un error si b es igual a 0
        }
        return a / b; // Si no hay error devuelve el resultado de la division
    }

    
 double multiplicacion(double a , double b) { // Funcion que divide dos numeros
        if(b == 0) {
            throw "Error = no multipliques entre cero, cualquier numero multiplicado por cero es 0"; // Lanza un error si b es igual a 0
        }
        return a * b; // Si no hay error devuelve el resultado de la Multiplicacion
    }

    class Usuario {
        private:
        string nombre;

        public:
        Usuario() {
            nombre = "Sin nombre";
        }

        Usuario(string n) {
            nombre = n;
        }
        // Metodo para mostrar el nombre del usuario
        void mostrar() {
            cout << "Hola " << nombre;
        }

         ~Usuario() { // Destructor
            cout << "Gracias por usar la calculadora " << nombre << '\n'; 
        }
    };

int main() {
    cout << "***** CALCULADORA *****" << endl;
    Usuario usuario1;

    usuario1 = Usuario("Tadeo");

    usuario1.mostrar();

    double num1, num2, resultado;
    int opcion;
    cout << " Escoge la operacion a realizar: " << '\n' ; // Menu de opciones
    cout << "1. Suma" << '\n';
    cout << "2. Resta" << '\n';
    cout << "3. Division" << '\n';
    cout << "4. Multiplicacion" << '\n';
    cin >> opcion;

    cout << "Ingresa dos numeros: ";
    cin >> num1 >> num2;

    try {
        switch (opcion) { // Switch para escoger la operacion
            case 1:
                resultado = sumar(num1, num2);
                cout << "El resultado de la suma es: " << resultado << '\n';
                break;
            case 2:
                resultado = restar(num1, num2);
                cout << "El resultado de la resta es: " << resultado << '\n';
                break;
            case 3:
                resultado = dividir(num1, num2);
                cout << "El resultado de la division es: " << resultado << '\n';
                break;
            case 4:
                resultado = multiplicacion(num1, num2);
                cout << "El resultado de la multiplicacion es: " << resultado << '\n';
                break;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }
    } catch (const char* error) { // Captura el error lanzado por la funcion dividir
        cout << error << '\n';
    }


    cout << "***** CALCULADORA *****" << endl;
    return 0;
}