#include <iostream>
#include <cmath>
using namespace std;

int opcion; // Opcion para elegir la figura(ambito global)

class AreasSobrecargadas { // Clase para areas con sobrecarga
    public:
    double areas(double pi, double radio, double radio2) { // Metodo para sacar el area de un circulo con sobrecarga
        return pi * radio * radio2;
    }

    double areas(double base, double altura, int entre2) { // Metodo para sacar el area de un triangulo con sobrecarga
        return base * altura / entre2;
    }

    double areas(double lado1, double lado2) { // Metodo para sacar el area de un cuadrado con sobrecarga
        return lado1 * lado2;
    }

    double areas(double baseMayor, double baseMenor, double altura3, int entre2) { // Metodo para sacar el area de un trapecio con sobrecarga
        return (baseMayor + baseMenor) * altura3 / entre2;
    }
};

// Areas de: circulo, triangulo, trapecio, cuadrado
int main() {
    cout << "******** Areas con Sobrecarga *******" << endl;
    // Menu para elegir la figura a calcular
    cout << "Escoge la figura a la cual quieras saber su area: " << '\n' ;
    cout << "1. Circulo" << '\n';
    cout << "2. Triangulo" << '\n';
    cout << "3. Cuadrado" << '\n';
    cout << "4. Trapecio" << '\n';
   
    cin >> opcion; // Entrada de la opcion
    
    // Condicionales para llamar al metodo correspondiente segun la opcion
     if (opcion == 1) {
        AreasSobrecargadas ar1;
        double resultado = ar1.areas(3.1416, 5.0, 5.0); // Area de un circulo
        cout << "El resultado del area del circulo es : " << resultado << "cm2" << '\n';    
    }
    else if (opcion == 2) {
        AreasSobrecargadas ar2;
        double resultado2 = ar2.areas(10, 5, 2); // Area de un triangulo
        cout << "El resultado del area del triangulo es : " << resultado2 << "cm2" << '\n';
    }
    else if (opcion == 3) {
        AreasSobrecargadas ar3;
        double resultado4 = ar3.areas(33, 50); // Area de un cuadrado
        cout << "El resultado del area del cuadrado es : " << resultado4 << "cm2" << '\n';
    }
    else if (opcion == 4) {
        AreasSobrecargadas ar4;
        double resultado5 = ar4.areas(5, 3, 8, 2); // Area de un trapecio
        cout << "El resultado del area del trapecio es : " << resultado5 << "cm2" << '\n';
    }
    
    cout << "******** Areas con Sobrecarga *******" << endl;



    return 0;
}