#include <iostream>
using namespace std;

class Calculadora {
    public:
    // Sobrecarga del metodo sumar
    int sumar(int a, int b) {
        return a + b;
    }
    double sumar(double a, double b) {
        return a + b;
    }
    int sumar(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calculadora;
    cout << "Suma de dos enteros: " << calculadora.sumar(5, 3) << '\n';
    cout << "Suma de dos enteros: " << calculadora.sumar(5.4, 3.5) << '\n';
    cout << "Suma de dos enteros: " << calculadora.sumar(5, 3, 65) << '\n';


    return 0;
}