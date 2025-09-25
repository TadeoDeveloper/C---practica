#include <string>
#include <iostream>
using namespace std;

int main()
{
// Recibir un numero decimal y convertirlo a entero y a string
    double num1;
    cout << "Ingreasa un numero decimal. ";
    cin >> num1;
    int entero = (int)num1;
    string texto = to_string(entero);

    cout << "Decimal original: " << num1 << endl;
    cout << "Decimal convertido a entero: " << entero << endl;
    cout << "Decimal convertido a texto: " << texto << endl;

    return 0;
}