#include <iostream>
using namespace std;

class Punto {
    private:
        double x, y;
    public:
        Punto() { // Constructor por defecto
            x = 0;
            y = 0;
        }
        Punto(double valor) { // Constructor con un solo parametro
            x = valor;
            y = valor;
        }
        Punto(double valorX, double valorY) { // Constructor con dos parametros
            x = valorX;
            y = valorY;
        }
        void mostrar() {
            cout << "Punto(" << x << ", " << y << ")" << endl;}
};

int main() {
    Punto p1;
    Punto p2(3.5);
    Punto p3(2.0, 4.5);

    p1.mostrar();
    p2.mostrar();
    p3.mostrar();

    return 0;
}