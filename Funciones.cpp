#include <iostream>
using namespace std;

void sumNumbers() 
{
   int suma = 0;
     for (int i = 1; i <= 1000; i++)
    {
       suma += i;
    }
      cout << suma << endl;
}

int main() {
    int n;
    cout << "¿Cuantas veces quieres que itere el programa?" << '\n';
    cin >> n;
    for (int i = 0; i < n; i++) {
        // Call the function n times
        sumNumbers();
    }
    return 0;
}