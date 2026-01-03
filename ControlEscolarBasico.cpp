#include <iostream> // Biblioteca estandar de entrada y salida
#include <string>   // Biblioteca estandar para manejo de cadenas
#include <vector>   // Biblioteca estandar para contenedores dinamicos
using namespace std;

// Adelantos de clases para usar en ControlEscolar
class Alumno;
class Maestro;
class Materia;

// Clase ControlEscolar para gestionar alumnos, maestros y materias
class ControlEscolar {
    // Aquí agregare atributos y métodos relevantes para el control escolar
    // Por ejemplo, listas de alumnos, maestros y materias
    vector<Alumno> alumnos;
    vector<Maestro> maestros;
    vector<Materia> materias;
};

class Alumno { // Clase Alumno
    private: // Tipo de acceso privado
    // Atributos
    int edad;
    string nombreCompleto;
    string genero;
    vector<string> materias;
    string direccion;
    string semestre;
    int matricula;

    public: // Tipo de acceso publico
    // Constructor por defecto
    Alumno() {
        nombreCompleto = "";
        edad = 0;
        genero = "";
        materias = {};
        direccion = "";
        semestre = "";
        matricula = 0;
    }
    // Constructor con parametros
    Alumno(string n, int e, string g, vector<string> m, string d, string s, int mat) {
        nombreCompleto = n;
        edad = e;
        genero = g;
        materias = m;
        direccion = d;
        semestre = s;
        matricula = mat;
    }
};

class Maestro { // Clase Maestro
    private: // Tipo de acceso privado
    // Atributos
    int edad;
    string genero;
    string nombreCompleto;
    string titulo;
    string profesion;
    int numDeCelula;
    // Constructor por defecto
    public: // Tipo de acceso publico
    Maestro() {
        edad = 0;
        genero = "";
        nombreCompleto = "";
        titulo = "";
        profesion = "";
        numDeCelula = 0;
    }

    Maestro (int e, string g, string n, string t, string p, int nc) {
        edad = e;
        genero = g;
        nombreCompleto = n;
        titulo = t;
        profesion = p;
        numDeCelula = nc;
    }
};

class Materia { // Clase Materia
    private: // Tipo de acceso privado
    // Atributos
    string nombreMateria;
    string profesorEncargado;
    double numeroDeCreditos;

    public: // Tipo de acceso publico
    Materia() { // Constructor por defecto
        nombreMateria = "";
        profesorEncargado = "";
        numeroDeCreditos = 0.0;
    }

    Materia(string nm, string pe, double nc) {
        nombreMateria = nm;
        profesorEncargado = pe;
        numeroDeCreditos = nc;
    }

};


int main() {
    Alumno alumno1;
    Maestro maestro1;
    Materia materia1;

    return 0;
}