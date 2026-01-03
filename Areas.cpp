#include <iostream>
using namespace std;

class AreaCirculo {
    public:
    int areaCirculo(double pi, double radio, double radio2) { // Metodo para sacar el area de un circulo
        return pi * radio * radio2;
    }
};

class AreaTriangulo {
    public:
    int areaTriangulo(double base, double altura, int entre2) { // Metodo para sacar el area de un triangulo
        return base * altura / entre2;
    }
};

class AreaRectangulo {
    public:
    int areaRectangulo(double base2, double altura2) { // Metodo para sacar el area de un rectangulo
        return base2 * altura2;
    }
};

class AreaCuadrado {
    public:
    int areaCuadrado(double lado1, double lado2) { // Metodo para sacar el area de un cuadrado
        return lado1 * lado2;
    }
};

// Métodos de area: circulo, triangulo, rectangulo, cuadrado
int main() {
    AreaCirculo ar1;
    double resultado = ar1.areaCirculo(3.14516, 5, 5); // Area de un circulo
    cout << "El resultado del area del circulo es : " << resultado << "cm2" << '\n';

    AreaTriangulo ar2;
    double resultado2 = ar2.areaTriangulo(10, 5, 2); // Area de un triangulo
    cout << "El resultado del area del triangulo es : " << resultado2 << "cm2" << '\n';

    AreaRectangulo ar3;
    double resultado3 = ar3.areaRectangulo(10, 3); // Area de un triangulo
    cout << "El resultado del area del rectangulo es : " << resultado3 << "cm2" << '\n';

    AreaCuadrado ar4;
    double resultado4 = ar4.areaCuadrado(33, 50); // Area de un cuadrado
    cout << "El resultado del area del cuadrado es : " << resultado4 << "cm2" << '\n';


    return 0;
}