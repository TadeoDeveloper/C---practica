#include <iostream>
using namespace std;

class Archivo {
    private:
        string nombre;


    public:
        // Constructor
        Archivo(string n) {
            nombre = n;
            cout << "Abriendo archivo: " << nombre << endl;

        }
        // Destructor
        ~Archivo() {
            cout << "Cerrando el archivo: " << nombre << endl;
        }
};

int main () {
    Archivo arch1("Info.txt"); // Se llama al comstructor

    return 0;
}