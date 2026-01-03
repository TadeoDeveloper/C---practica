#include <iostream> // Biblioteca estandar de entrada y salida
#include <string>   // Biblioteca estandar para manejo de cadenas
#include <vector>   // Biblioteca estandar para contenedores dinamicos
using namespace std;

// Adelantos de clases para usar en ControlEscolar
class Alumno;
class Maestro;
class Materia;
string idAlumno;
string idMaestro;
string idMateria;


// Clase ControlEscolar para gestionar alumnos, maestros y materias
class ControlEscolar {
    public:
    void solicitarInformacion() {
        cout << "Agregar ID de al menos 2 Alumnos" << '\n';
        cin >> idAlumno;
        cout << "Agregar ID de al menos 2 Maestro" << '\n';
        cin >> idMaestro;
        cout << "Agregar ID de al menos 3 Materias" << '\n';
        cin >> idMateria;

    }
    // Aquí agregare atributos y métodos relevantes para el control escolar
    // Por ejemplo, listas de alumnos, maestros y materias
    vector<Alumno> alumnos;
    vector<Maestro> maestros;
    vector<Materia> materias;
};

class Alumno { // Clase Alumno
    private: // Tipo de acceso privado
    // Atributos
    string idAlumno;
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
        idAlumno = "";
        nombreCompleto = "";
        edad = 0;
        genero = "";
        materias = {};
        direccion = "";
        semestre = "";
        matricula = 0;
    }
    // Constructor con parametros
    Alumno(string i, string n, int e, string g, vector<string> m, string d, string s, int mat) {
        idAlumno = i;
        nombreCompleto = n;
        edad = e;
        genero = g;
        materias = m;
        direccion = d;
        semestre = s;
        matricula = mat;
    }

    void setDatosAlumno() { 
        cout << "Introduzca ID del alumno: " << '\n';
        cin >> idAlumno;

        cout << "Introduzca nombre del alumno: " << '\n';
        cin >> nombreCompleto;

        cout << "Introduzca edad del alumno: " << '\n';
        cin >> edad;

        cout << "Introduzca genero del alumno: " << '\n';
        cin >> genero;

        cout << "Introduzca direccion del alumno: " << '\n';
        cin >> direccion;

        cout << "Introduzca semestre del alumno: " << '\n';
        cin >> semestre;
   
        cout << "Introduzca matricula del alumno: " << '\n';
        cin >> matricula;

        cout << "Id del alumno: " << idAlumno << "Su nombre es: " << nombreCompleto << ", su edad es: " << edad << ", su genero es: " << genero << ", su direccion es: " << direccion << ", su semestre es: " << semestre << ", su matricula es: " << matricula << '\n';
    }
};

class Maestro { // Clase Maestro
    private: // Tipo de acceso privado
    // Atributos
    int idMaestro;
    int edad;
    string genero;
    string nombreCompleto;
    string titulo;
    string profesion;
    int numDeCelula;
    // Constructor por defecto
    public: // Tipo de acceso publico
    Maestro() {
        idMaestro = 0;
        edad = 0;
        genero = "";
        nombreCompleto = "";
        titulo = "";
        profesion = "";
        numDeCelula = 0;
    }

    Maestro (int i, int e, string g, string n, string t, string p, int nc) {
        idMaestro = i;
        edad = e;
        genero = g;
        nombreCompleto = n;
        titulo = t;
        profesion = p;
        numDeCelula = nc;
    }
     void setDatosMaestro() {
        cout << "Introduzca ID del Maestro: " << '\n';
        cin >> idMaestro;
        cout << "Introduzca la edad del Maestro: " << '\n';
        cin >> edad;
        cout << "Introduzca el genero del Maestro: " << '\n';
        cin >> genero;
        cout << "Introduzca el nombre completo del Maestro: " << '\n';
        cin >> nombreCompleto;
        cout << "Introduzca la profesion del Maestro: " << '\n';
        cin >> profesion;
        cout << "Introduzca el numero de la celula del Maestro: " << '\n';
        cin >> numDeCelula;

        cout << "El ID del maestro es: " << idMaestro << ", su edad es: " << edad << ", su genero es: " << genero << ", su nombre completo es: " << nombreCompleto << ", su profesion es: " << profesion << ", su numero de celula es: " << numDeCelula << '\n';
    }

};

class Materia { // Clase Materia
    private: // Tipo de acceso privado
    // Atributos
    int idMateria;
    string nombreMateria;
    string profesorEncargado;
    double numeroDeCreditos;

    public: // Tipo de acceso publico
    Materia() { // Constructor por defecto
        idMateria = 0;
        nombreMateria = "";
        profesorEncargado = "";
        numeroDeCreditos = 0.0;
    }

    Materia(int i, string nm, string pe, double nc) {
        idMateria = i;
        nombreMateria = nm;
        profesorEncargado = pe;
        numeroDeCreditos = nc;
    }

    void setDatosMateria() {
        cout << "Introduzca ID de la materia: " << '\n';
        cin >> idMateria;
        cout << "Introduzca nombre de la materia: " << '\n';
        cin >> nombreMateria;
        cout << "Introduzca el profesor encargado de la materia: " << '\n';
        cin >> profesorEncargado;
        cout << "Introduzca el numero de creditos de la materia: " << '\n';
        cin >> numeroDeCreditos;

        cout << "El Id de la materia es: " << idMateria << "El nombre de la materia es: " << nombreMateria << ", el profesor encargado es: " << profesorEncargado << ", el numero de creditos es: " << numeroDeCreditos << '\n';
    }

};


int main() {
    cout << "***** Control Escolar *****" << '\n';

    int opcion;
    cout << " Registar: " << '\n' ; // Menu de opciones
    cout << "1. Alumno" << '\n';
    cout << "2. Maestro" << '\n';
    cout << "3. Materia" << '\n';
    cout << "4. Salir" << '\n';
    cin >> opcion;
   
    Alumno alumno1;
    Maestro maestro1;
    Materia materia1;

    // Procesar la opcion seleccionada
    if (opcion == 1) {
        alumno1.setDatosAlumno();
    }

    else if (opcion == 2) {
        maestro1.setDatosMaestro();
    }

    else if (opcion == 3) {
        materia1.setDatosMateria();
    }

    else if (opcion == 4) {
        cout << "Saliendo del programa..." << '\n';
    }

    else {
        cout << "Opcion no valida" << '\n';
    }

    return 0;
}