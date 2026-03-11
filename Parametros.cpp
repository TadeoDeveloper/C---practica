#include <iostream>
using namespace std;

// Function declaration
int calc(int numb1, int numb2)
{
    return numb1 * numb2;
}

int main() 
{
    int a, b;
    cout << "Pon dos numeros que quieras multiplicar" << '\n';
    cin >> a >> b;
    // Call the function with a and b as arguments
    int resultado = calc(a, b);
    cout << resultado << '\n';
    

    return 0;
}