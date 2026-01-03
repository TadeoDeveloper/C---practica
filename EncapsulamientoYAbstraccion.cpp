#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para rand y srand
#include <ctime> // Para funciones de tiempo
using namespace std;

// Abstracción, encapsulamiento
class MaquinaAk {
    private:
        int tokens;
        string juegos [5] = {"Mario Kart", "Zelda", "Dark souls", "Elder ring" , "The last of us"}; // Vector de juegos

        string seleccionarJuegoAleatorio() { 
            int indice = rand () % 5; // rand devuelve un numero aleatorio
            return juegos[indice]; // Retorna un juego aleatorio
        }
    public:
    MaquinaAk(int t) {
        tokens = t;
        srand(time(0)); // Semilla, sigue algoritmos matematicos con tiempo para darnos un número aleatorio
    }

    void comprarJuego() {
        if (tokens < 2) {
            cout << "No tienes tokens suficientes" << '\n';
            return;
        }
        tokens -= 2;
        cout << "Procesando compra..." << '\n';

        string juegoEligido = seleccionarJuegoAleatorio();

        cout << "Haz ganado el juego sorpresa: " << juegoEligido << '!' <<'\n';
        cout << "Tokens restantes: " << tokens << '\n';
    }

    int getTokens() {
        return tokens;
    }

    int recargarTokens() {
        tokens += 2;
        return tokens;
    }

    void mostrarListaJuegos() {
        for (int i = 0; i < 5; i++) {
            cout << " " << juegos[i] << '\n';    
        }
    }

}; // Fin de la clase MaquinaAk

int main() {
    MaquinaAk m1(3); // Inicializamos con 3 tokens

    cout << "Bienvenido a la maquina arcade aleatoria" << '\n';
    cout << "Tokens disponibles: " << m1.getTokens() << '\n';

    int opcion; 
    do{
        cout << "Selecciona una opcion de menu: " << '\n';
        cout << "1. Comprar juego" << '\n';
        cout << "2. Ver tokens" << '\n';
        cout << "3. Ver lista de juegos" << '\n';
        cout << "4. Recargar tokens" << '\n';
        cout << "5. Salir" << '\n';
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            m1.comprarJuego();
            break;
        case 2:
            cout << "Tokens actuales: " << m1.getTokens() << '\n';
            break;
        case 3: 
            cout << "Lista de juegos disponibles:" << '\n';
            m1.mostrarListaJuegos();
            break;
        case 4: 
            cout << "Tus nuevos tokens son: " << m1.recargarTokens() << '\n';
            break;
        case 5:
            cout << "Gracias por jugar vuelva pronto" << '\n';
            break;
        default:
            cout << "Opcion invalida, porfavor selecciona" << '\n';
            break;
        }
    }
    while (opcion != 5);
    return 0;

    /* Por qué muestra abstracción? y por que muestra encapsulamiento?
    Cambiar el precio de los juegos por 2 tokens 
    Agregar la funcion: ver lista de juegos y recargar tokens*/
}