#include <iostream>
using namespace std;

class Lampara {
    public:
    void encender() {
        cout << "La lampara esta encendida" << endl;
    }

};

class linterna {
    public:
    void encender() {
        cout << "La linterna esta encendida" << endl;
    }

};

int main() {
    Lampara lamp1;
    linterna lin1;

    lamp1.encender();
    lin1.encender();


    return 0;
}