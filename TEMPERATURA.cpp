#include <string>
#include <iostream>
using namespace std;

int main() {

    cout << "***** CONVERSOR DE TEMPERATURA *****" << '\n';
    double fahrenheit = 0;
    
    cout << "Ingresa la temperatura que quieras convertir ";
    cin >> fahrenheit;
    int entero = (int)fahrenheit;
    string texto = to_string(entero);

    cout << "Decimal original: " << fahrenheit << endl;
    cout << "Decimal convertido a entero: " << entero << endl;
    cout << "Decimal convertido a texto: " << texto << endl;


    cout << "***** CONVERSOR DE TEMPERATURA *****" << '\n';


    return 0;
}