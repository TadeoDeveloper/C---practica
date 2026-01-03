#include <iostream>
using namespace std;
#include <cmath>

class Multiplicacion {
    public:
    int multiplicar(int a, int b) { // Metodo para multiplicar dos numeros
        return a * b;
    }
};
// Métodos de area: circulo, triangulo, rectangulo, cuadrado
int main() {
    Multiplicacion mult1;
    int resultado = mult1.multiplicar(5, 3); // Multiplicacion de 3 y 5
    cout << "El resulato es : " << resultado << '\n';
    return 0;
}