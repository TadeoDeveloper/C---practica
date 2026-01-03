#include <iostream> // Biblioteca estandar de entrada y salida
#include <string> // Biblioteca estandar para manejo de cadenas
#include <vector> // Biblioteca estandar para contenedores dinamicos
#include <list> // Biblioteca estandar para listas (sirven para almacenar datos dinamicamente)
using namespace std;

class Persona { // Clase Padre Persona
    protected: // Atributos protegidos para herencia
        int edad;
        string nombre;
        string genero;

    public: // Tipo de acceso publico
    Persona() {
        edad = 0;
        nombre = "";
        genero = "";
    }

    Persona(int e, string n, string g) {
        edad = e;
        nombre = n;
        genero = g;
    }

    void mostrarInfo() {
        cout << " Nombre: " << nombre 
            << " | Edad: " << edad 
            << " | Genero: " << genero << '\n';
    }

};

class Alumno: public Persona { // Clase Alumno
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
        materias = {};
        direccion = "";
        semestre = "";
        matricula = 0;
    }
    // Constructor con parametros
    Alumno(string i, vector<string> m, string d, string s, int mat) {
        idAlumno = i;
        materias = m;
        direccion = d;
        semestre = s;
        matricula = mat;
    }

    void setDatosAlumno() { 
        cout << "Introduzca ID del alumno: " << '\n';
        cin >> idAlumno;

        cout << "Introduzca nombre del alumno: " << '\n';
        cin >> nombre;

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

        cout << "Id del alumno: " << idAlumno << "Su nombre es: " << nombre << ", su edad es: " << edad << ", su genero es: " << genero << ", su direccion es: " << direccion << ", su semestre es: " << semestre << ", su matricula es: " << matricula << '\n';
    }
};

class Maestro: public Persona { // Clase Maestro
    private: // Tipo de acceso privado
    // Atributos
    int idMaestro;
    string titulo;
    string profesion;
    int numDeCelula;
    // Constructor por defecto
    public: // Tipo de acceso publico
    Maestro() {
        idMaestro = 0;
        titulo = "";
        profesion = "";
        numDeCelula = 0;
    }

    Maestro (int i, string t, string p, int nc) {
        idMaestro = i;
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
        cin >> nombre;
        cout << "Introduzca la profesion del Maestro: " << '\n';
        cin >> profesion;
        cout << "Introduzca el numero de la celula del Maestro: " << '\n';
        cin >> numDeCelula;

        cout << "El ID del maestro es: " << idMaestro << ", su edad es: " << edad << ", su genero es: " << genero << ", su nombre completo es: " << nombre << ", su profesion es: " << profesion << ", su numero de celula es: " << numDeCelula << '\n';
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

    // Listas para almacenar multiples objetos usando <list>
    list<Alumno> listaAlumnos;
    list<Maestro> listaMaestros;
    list<Materia> listaMaterias;

    int opcion;
    
    // Menu principal en bucle
    while (true) {
        cout << "\n--- Menu Principal ---" << '\n';
        cout << " Registar: " << '\n' ; // Menu de opciones
        cout << "1. Alumno" << '\n';
        cout << "2. Maestro" << '\n';
        cout << "3. Materia" << '\n';
        cout << "4. Mostrar Alumnos" << '\n';
        cout << "5. Mostrar Maestros" << '\n';
        cout << "6. Mostrar Materias" << '\n';
        cout << "7. Salir" << '\n';
        cout << "Seleccione una opcion: ";
        cin >> opcion;
       
        // Procesar la opcion seleccionada
        if (opcion == 1) {
            Alumno nuevoAlumno;
            nuevoAlumno.setDatosAlumno();
            listaAlumnos.push_back(nuevoAlumno); // Agregar a la lista usando <list>
            cout << "\nAlumno registrado exitosamente!" << '\n';
        }

        else if (opcion == 2) {
            Maestro nuevoMaestro;
            nuevoMaestro.setDatosMaestro();
            listaMaestros.push_back(nuevoMaestro); // Agregar a la lista usando <list>
            cout << "\nMaestro registrado exitosamente!" << '\n';
        }

        else if (opcion == 3) {
            Materia nuevaMateria;
            nuevaMateria.setDatosMateria();
            listaMaterias.push_back(nuevaMateria); // Agregar a la lista usando <list>
            cout << "\nMateria registrada exitosamente!" << '\n';
        }

        else if (opcion == 4) {
            cout << "\n--- Lista de Alumnos ---" << '\n';
            if (listaAlumnos.empty()) {
                cout << "No hay alumnos registrados." << '\n';
            } else {
                int contador = 1;
                for (auto it = listaAlumnos.begin(); it != listaAlumnos.end(); ++it) {
                    cout << "Alumno " << contador << ": ";
                    it->mostrarInfo();
                    contador++;
                }
            }
        }

        else if (opcion == 5) {
            cout << "\n--- Lista de Maestros ---" << '\n';
            if (listaMaestros.empty()) {
                cout << "No hay maestros registrados." << '\n';
            } else {
                int contador = 1;
                for (auto it = listaMaestros.begin(); it != listaMaestros.end(); ++it) {
                    cout << "Maestro " << contador << ": ";
                    it->mostrarInfo();
                    contador++;
                }
            }
        }

        else if (opcion == 6) {
            cout << "\n--- Lista de Materias ---" << '\n';
            if (listaMaterias.empty()) {
                cout << "No hay materias registradas." << '\n';
            } else {
                cout << "Total de materias: " << listaMaterias.size() << '\n';
            }
        }

        else if (opcion == 7) {
            cout << "Saliendo del programa..." << '\n';
            break; // Salir del bucle
        }

        else {
            cout << "Opcion no valida" << '\n';
        }
    }

    return 0;
}