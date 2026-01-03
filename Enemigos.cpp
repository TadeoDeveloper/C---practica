#include <iostream>
#include <string>
using namespace std;

class Enemigo {
    protected:
        float vida;
        float damage;

    public:
        Enemigo(float v, float d) : vida(v), damage(d) {}

        void mostrarInfo() {
            cout << " Vida: " << vida 
                << " | Damage: " << damage << '\n';
        }
};


class Goblim: public Enemigo {
    private:
        float velocidad;

        public:
            Goblim(float v, float d, float ve) : Enemigo(v, d), velocidad(v) {}

    void mostrarInfo() {
        cout << "Goblim - >";
        Enemigo::mostrarInfo();
        cout << "Velocidad: " << velocidad << '\n';
    }
};

class Bat: public Enemigo {
    private:
        bool estaVolando;

        public:
            Bat(float v, float d, bool e) : Enemigo(v, d), estaVolando(e) {}

    void mostrarInfo() {
        cout << "Bat - >";
        Enemigo::mostrarInfo();
        cout << "Volando: " << estaVolando << '\n';
    }
};

class Slim: public Enemigo {
    private:
        bool estaSaltando;

        public:
            Slim(float v, float d, bool es) : Enemigo(v, d), estaSaltando(es) {}

    void mostrarInfo() {
        cout << "Slim - >";
        Enemigo::mostrarInfo();
        cout << "Saltando: " << estaSaltando << '\n';
    }
};

int main() {
    cout << "=== Enemigos ===" << '\n';
    cout << "1 = verdadero, 0 = falso" << '\n';
    Goblim g1(55.5, 25.9, 23.8);
    Bat b1(50.5, 20.2, true);
    Slim s1(25.3, 10.4, false);

    g1.mostrarInfo();
    b1.mostrarInfo();
    s1.mostrarInfo();

    return 0;
}