#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "***** CALCULADORA *****" << '\n';
    float num1;
    float num2;   
    int opcion;
    string entrada;

    cout << "Introduzca el primer numero: ";
    cin >> num1;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;

    cout << "Escoge la operacion a realizar: " << '\n' ;
    cout << "1. Suma" << '\n';
    cout << "2. Resta" << '\n';
    cout << "3. Division" << '\n';
    cout << "4. Multiplicacion" << '\n';
    cout << "5. Modulo" << '\n';

    cin >> opcion;

    double resultado;

    if (opcion == 1) {
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << '\n';
    }
    else if (opcion == 2) {
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << '\n';
    }
    else if (opcion == 3) {
        resultado = num1 / num2;
        cout << "El resultado de la resta es: " << resultado << '\n';
    }
    else if (opcion == 4) {
        resultado = num1 * num2;
        cout << "El resultado de la resta es: " << resultado << '\n';
    }
    else if (opcion == 5) { // fmod para numeros float
        resultado = fmod(num1, num2);
        cout << "El resultado del modulo es: " << resultado << '\n';
    }

    // Validacion de division por cero
    if (num2 == 0)
    {
        if (opcion == 3 || opcion == 5) {
            cout << "Error: Division por cero no es permitida, Por favor, escoja una operacion valida" << '\n';
        } 
    }

    // Validar que la entrada sea un numero
    cin >> entrada;
    for (int i = 0; i < entrada.length(); i++) {
        if (isalpha(entrada[i])) {  // isalpha para validar si es una letra
            cout << "Error: Entrada invalida, Por favor, escoja una operacion valida" << '\n';
            break;
        }
    }
    cout << "***** CALCULADORA *****";

    return 0;
}