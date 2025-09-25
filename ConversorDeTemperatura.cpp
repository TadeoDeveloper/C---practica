#include <iostream>
using namespace std;

int main() {

    cout << "***** CONVERSOR DE TEMPERATURA *****" << '\n';
    float fahrenheit = 0;
    float celsius = 0;
  

    cout << "Quieres convertir de fahrenheit a celsius o de celsius a fahrenheit" << '\n';
    cout << "Pulsa F para fahrenheit: " << '\n';
    cout << "Pulsa C para celsius: " << '\n';
    char tipoConversion;
    cin >> tipoConversion;

    if (tipoConversion == 'F' || tipoConversion == 'f') {
        cout << "Introduce los grados Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius.\n";
    } else if (tipoConversion == 'C' || tipoConversion == 'c') {
        cout << "Introduce los grados Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit.\n";
    } else {
        cout << "Opción no válida.\n";
    }
    

    cout << "***** CONVERSOR DE TEMPERATURA *****" << '\n';


    return 0;
}