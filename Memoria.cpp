#include <iostream>
using namespace std;

/* Memoria estatica (automatica): se libera automaticamente y se usa cuando conoces el tamaño de las variables */
// Memoria dinamica (manual): no se libera automaticamente y se usa cuando el tamaño de datos se conoce hasta el tiempo de ejecucion
int main() {
    int* numero = new int; // Reserva memoria dinamica para un entero
    *numero = 25; // Asigna un valor entero
    cout << "Numero guardado: " << *numero << '\n';

    delete numero; // Libera la memoria asignada

    return 0;
}