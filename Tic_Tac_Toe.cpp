#include <iostream>
#include <ctime>
using namespace std;

// Declaracion de funciones
void dibujarTablero(char *espacios);
void turnoJugador(char *espacios, char jugador);
void turnoComputadora(char *espacios, char computadora);
bool verificarGanador(char *espacios, char jugador, char computadora);
bool verificarEmpate(char *espacios);


int main() {

   // Arreglo para representar los espacios del tablero
   char espacios[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

   dibujarTablero(espacios); // Dibuja el tablero inicial

   return 0;
}

    void dibujarTablero(char *espacios)
    {
        cout << '\n';
        cout << "     |     |     ";
        cout << "  "" <<    |     |     ";
        cout << "     |     |     ";

    }
    
    void turnoJugador(char *espacios, char jugador) 
    {

    }
    void turnoComputadora(char *espacios, char computadora) 
    {

    }
    bool verificarGanador(char *espacios, char jugador, char computadora) 
    {
        return 0; // return false por defecto
    }
    bool verificarEmpate(char *espacios)
    {
        return 0; // return false por defecto
    }