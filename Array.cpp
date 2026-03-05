#include <iostream>
#include <string>
using namespace std;

int main()
{
    string words[2] = {"Hola", "Adios"};
    for (int i = 0; i < 2; i++)
    {
    cout << "Elementos: " << words[i] << '\n';
    }
    return 0;
}