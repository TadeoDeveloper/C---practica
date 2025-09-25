#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Libro { // Clase libro
    private:
    // Atributos
        string titulo;
        string autor;
        int fecha;
        bool disponible;
        bool donar;

    public:
    // Constructor con nuevos parametros
        Libro (string t, string a, int y, bool esDonado) :titulo (t), autor(a), fecha(y), donar(esDonado), disponible(true){}

    // Metodos
    void prestar() {
        if (disponible) {
            disponible = false;
            cout << "El libro" << titulo << "ha sido prestado." << '\n';
        }
        else {
            cout << "El libro" << titulo << "ya esta prestado." << '\n';
        }
    }

    void devolver() {
        disponible = true;
        cout << "El libro" << titulo << "ha sido devuelto." << '\n';
    }

    void mostrar()const {
        cout << " " << titulo << " de " << autor << " (" << fecha << ") " << (donar ? "[Donado]" : "[Comprado]")
        << (disponible ? "[Disponible]" : "[Prestado]") << '\n'; // Operador ternario, condicion ? valor si true : valor si false
    }

    bool estaDisponible() const { // Getter recupera/retorna si se encuentra disponible
        return disponible;
    }

    string stringTitulo() const {
        return titulo;
    }
};

class Estudiante { // Clase estudiante
    private:
        // Atributos
        string nombre;
        vector <Libro> librosPrestados; // Vector de objetos Libro
        // Creacion del constructor
    public:
        Estudiante (string n) : nombre(n) {}
        
        // Metodos
        void tomarLibro(Libro &libro) { // Verifica si el libro esta disponible
            if (libro.estaDisponible()) {
                libro.prestar();
                librosPrestados.push_back(libro); // Agregar libro al vector
            }
            else {
                cout << "" << nombre << " no pudo tomar \"" << libro.stringTitulo() << "\". \n";
            }
        }
        // Es un bucle for(i = 0; i < n; i++) que recorre el vector librosPrestados y llama al metodo mostrar de cada libro
    void devolverLibro (Libro &libro) {
        libro.devolver();
        for (auto it = librosPrestados.begin(); it != librosPrestados.end(); ++ it) { // iteradores = it
            if (it->stringTitulo() == libro.stringTitulo()) { // Comparar titulos de los libros
                librosPrestados.erase(it); // Eliminar libro del vector
                break; // Romper cadena
            }
        }
    }
        
    void mostrar() const {
        cout << "Estudiante: " << nombre << "\nLibros prestados:\n";
        if (librosPrestados.empty()) {
            cout << "(ninguno)\n";
        }
        else {
            for (auto &libro : librosPrestados) {
                cout << " - ";
                libro.mostrar();
            }
        }
        cout << endl;
    }
};

class Biblioteca { // Clase biblioteca
private:
    // Atributos
    string nombre;
    vector<Libro> catalogo;
 
public:
    // Constructor
    Biblioteca(string n) : nombre(n) {}
 
    // Metodos
    void agregarLibro(Libro l) {
        catalogo.push_back(l);
    }
 
    void mostrarLibros() const {
        cout << "" << nombre << " - Catálogo de libros:\n";
        for (auto &libro : catalogo) {
            libro.mostrar();
        }
        cout << endl;
    }
 
    Libro& getLibro(int index) {
        return catalogo[index];
    }
};

int main() { // Programa principal

    Biblioteca biblio(" Biblioteca Central "); // Creacion de objeto biblioteca
 
    // libros con el nuevo constructor (título, autor, año, donado?)
    biblio.agregarLibro(Libro(" El Principito", "Antoine de Saint Exupery", 1943, true));
    biblio.agregarLibro(Libro(" Cien Anios de Soledad", "Gabriel Garcia Marquez", 1967, false));
    biblio.agregarLibro(Libro(" 1984", "George Orwell", 1949, true));
 
    biblio.mostrarLibros(); // Mostrar catalogo
 
    Estudiante est1("Ana"); // Creacion de objeto estudiante
 
    est1.tomarLibro(biblio.getLibro(1)); // "Cien Años de Soledad"
    est1.mostrar(); // Mostrar libros prestados
    biblio.mostrarLibros(); // Mostrar catalogo actualizado
 
    est1.devolverLibro(biblio.getLibro(1)); // Devolver libro
    est1.mostrar(); // Mostrar libros prestados
    biblio.mostrarLibros(); // Mostrar catalogo actualizado

    return 0;
}