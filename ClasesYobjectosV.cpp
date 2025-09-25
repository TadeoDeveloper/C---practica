#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Una clase es el molde o plantilla que define las caracteristicas de un objeto
// Un objeto es una instancia de una clase 

class Estudiante {
    private: // Solo es accesible dentro de la clase 
    string nombre;
    string carrera;
    int semestre;
    int edad;
    double promedio;

    public:
    void setDatos (string n, string c, int s, double p){ // Simplemente un metodo para asignar todos los datos
        nombre = n;
        carrera = c;
        semestre = s;
        promedio = p;
    }  

    void mostrar() { // Metodo para mostrar los datos del estudiante
        cout << "Nombre: " << nombre;
        cout << "Carrera: " << carrera;
        cout << "Semestre: " << semestre;
        cout << "Promedio: " << promedio << endl;

    }

    bool aprobo() { // Metodo que regresa true si el estudiante aprobo, false si no
        return promedio >= 70;
    }
};

int main() 
{
    int n;
    cout << "Cuantos estudiantes deseas registrar: ";
    cin >> n;

    vector <Estudiante>lista; // Vector de objetos Estudiante
    lista.resize(n); // Redimensionamos el vector al numero de estudiantes que se van a registrar

    for (int i = 0; i<n; i++){
        string nombre, carrera;
        int semestre;
        double promedio;

        cout << "\n Estudiante" << i + 1 << '\n';
        cin.ignore(); // Limpieza de buffer
        cout << "Nombre: ";
        getline(cin, nombre); // Sirve para leer cadenas con espacios
        cout << "Carrera: ";
        getline(cin, carrera);
        cout << "Semestre: ";
        cin >> semestre;
        cout << "Promedio: ";
        cin >> promedio;

        lista [i].setDatos(nombre,carrera,semestre,promedio);
    }

    cout << "\n Lista de estudiantes\n";
    int aprobados = 0, reprobados = 0;
    for(auto e :lista) {
        e.mostrar();
        if (e.aprobo())aprobados++;
        else reprobados++;
    }

    cout << "\n Aprobaron: " << aprobados << endl;
    cout << "\n Reprobaron: " << reprobados << endl;


    return 0;
}

// LLenar con al menos 6 estudiantes