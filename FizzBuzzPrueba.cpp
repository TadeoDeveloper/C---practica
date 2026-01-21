#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++) // Bucle del 1 al 100
    {
        if (i % 15 == 0) // Verifica si es divisible por 3 y 5, 15 es el mcm de 3 y 5
        {
            cout << "FizzBuzz" << '\n';
        }
        else if (i % 5 == 0) // Verifica si es divisible por 5
        {
            cout << "Buzz" << '\n';
        }
        else if (i % 3 == 0) // Verifica si es divisible por 3
        {
            cout << "Fizz" << '\n';
        }
        else 
            cout << i << '\n';
    }

    return 0;

}