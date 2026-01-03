#include <iostream>
#include <string>
using namespace std;

class Profesor {
public:
    int id;
    string nombre;
    string apellido;

    void capturar() {
        cout << "ID del profesor: ";
        cin >> id;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellido: ";
        getline(cin, apellido);
    }

    void mostrar() {
        cout << "Profesor ID: " << id << "\nNombre: " << nombre << " " << apellido << endl;
    }
};

class Materia {
public:
    int id;
    string nombre;
    int idProfesor;

    void capturar() {
        cout << "ID de la materia: ";
        cin >> id;
        cin.ignore();
        cout << "Nombre de la materia: ";
        getline(cin, nombre);
        cout << "ID del profesor que imparte esta materia: ";
        cin >> idProfesor;
    }

    void mostrar(Profesor profesores[], int numProfesores) {
        cout << "Materia ID: " << id << "\nNombre: " << nombre << endl;
        cout << "Profesor: ";
        for (int i = 0; i < numProfesores; i++) {
            if (profesores[i].id == idProfesor) {
                cout << profesores[i].nombre << " " << profesores[i].apellido << endl;
                return;
            }
        }
        cout << "No encontrado." << endl;
    }
};

class Alumno {
public:
    int id;
    string nombre;
    int idMateria;

    void capturar() {
        cout << "ID del alumno: ";
        cin >> id;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "ID de la materia que cursa: ";
        cin >> idMateria;
    }

    void mostrar(Materia materias[], int numMaterias, Profesor profesores[], int numProfesores) {
        cout << "Alumno ID: " << id << "\nNombre: " << nombre << endl;

        // Buscar materia
        for (int i = 0; i < numMaterias; i++) {
            if (materias[i].id == idMateria) {
                cout << "Materia: " << materias[i].nombre << endl;

                // Buscar profesor de esa materia
                for (int j = 0; j < numProfesores; j++) {
                    if (profesores[j].id == materias[i].idProfesor) {
                        cout << "Profesor: " << profesores[j].nombre << " " << profesores[j].apellido << endl;
                        return;
                    }
                }
            }
        }
        cout << "Materia o profesor no encontrado." << endl;
    }
};

int main() {
    Profesor profesores[2];
    Materia materias[3];
    Alumno alumnos[2];

    cout << "=== CAPTURA DE PROFESORES ===" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\nProfesor #" << i + 1 << endl;
        profesores[i].capturar();
    }

    cout << "\n=== CAPTURA DE MATERIAS ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nMateria #" << i + 1 << endl;
        materias[i].capturar();
    }

    cout << "\n=== CAPTURA DE ALUMNOS ===" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\nAlumno #" << i + 1 << endl;
        alumnos[i].capturar();
    }

    int opcion;
    do {
        cout << "\n=== MENU DE VISUALIZACION ===" << endl;
        cout << "1. Profesor\n2. Materia\n3. Alumno\n0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 0) break;

        int idBuscado;
        bool encontrado = false;
        cout << "Ingresa el ID: ";
        cin >> idBuscado;

        switch (opcion) {
            case 1:
                for (auto &p : profesores) {
                    if (p.id == idBuscado) {
                        p.mostrar();
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) cout << "Profesor no encontrado.\n";
                break;

            case 2:
                for (auto &m : materias) {
                    if (m.id == idBuscado) {
                        m.mostrar(profesores, 2);
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) cout << "Materia no encontrada.\n";
                break;

            case 3:
                for (auto &a : alumnos) {
                    if (a.id == idBuscado) {
                        a.mostrar(materias, 3, profesores, 2);
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) cout << "Alumno no encontrado.\n";
                break;
        }
    } while (opcion != 0);

    cout << "\nPrograma finalizado." << endl;
    return 0;
}