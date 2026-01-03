#include <iostream>
using namespace std;

class ConversorUnidades { // Clase para conversion de unidades
    public:

    float cmAMetros(float cm) { // Conversion de cm a metros
        return cm / 100;
    }

    float metrosAKilometros(float metros) { // Conversion de metros a kilometros
        return metros / 1000;
    }

    float metrosAMilimetros(float metros) { // Conversion de metros a milimetros
        return metros * 1000;
    }
};

int main() {
    ConversorUnidades conversor;

    cout << "Escoge a que medida quieres convertir" << '\n';
    cout << "1. cm a metros" << '\n';
    cout << "2. metros a kilometros" << '\n';
    cout << "3. metros a milimetros" << '\n';

    int opcion;
    cin >> opcion;

    if (opcion == 1) { 
        double resultado1 = conversor.cmAMetros(150.0); // Conversion de cm a metros
        cout << "La conversion de cm a metros es: " << resultado1 << "m" << '\n';
    }
    else if (opcion == 2) {
        double resultado2 = conversor.metrosAKilometros(2.5); // Conversion de metros a kilometros
        cout << "La conversion de metros a kilometros es: " << resultado2 << "km" << '\n';
    }
    else if (opcion == 3) {
        double resultado3 = conversor.metrosAMilimetros(10.5); // Conversion de metros a milimetros
        cout << "La conversion de metros a mm es: " << resultado3 << "mm" << '\n';
    }


    return 0;
}