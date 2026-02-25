// This program use a while loop to divide the input by 2 as long as the number is bigger or equal to 3.5.
#include <iostream>

using namespace std;

int main() {
    double numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    // El bucle se ejecuta MIENTRAS el número sea mayor o igual a 3.5
    while (numero >= 3.5) {
        numero = numero / 2;
    }

    // Al salir del bucle, el número es obligatoriamente menor a 3.5
    cout << "El primer numero menor a 3.5 es: " << numero << endl;

    return 0;
}