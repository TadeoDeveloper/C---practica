#include <iostream>
using namespace std;

// Abstracción, encapsulamiento
class CuentaBancaria {
    private:
    float saldo;

    public:
    CuentaBancaria(float s){saldo = s;}

    float getSaldo() {
        return saldo;
    }

    void depositar(float cantidad) {
        saldo += cantidad;
    }

    void retirar(float cantidad) {
        if (cantidad <= saldo) saldo -= cantidad;
    }

};

int main() {

    return 0;
}