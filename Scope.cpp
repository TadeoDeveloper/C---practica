#include <iostream> // Libreria estandar
using namespace std;

class Alumnos{ // Clase Alumnos
private: // Acceso privado(local a la clase)
    string nombre;
    int edad;
    int matricula;
    double calificacion;
    int materias;

public: // Acceso publico (ambito global)
string Horario = "Lunes a Viernes de 9 a 9";

Alumnos(){ // Constructor por defecto
    nombre = "Pepe";
    edad = 0;
    matricula = 0;
    calificacion = 0.0;
    materias = 0;
}

Alumnos(string n, int e, int m, double c, int ma) { // Constructor con parametros
    nombre = n;
    edad = e;
    matricula = m;
    calificacion = c;
    materias = ma;
    
}

void setDatos() { // Metodos para establecer datos
    cout << "Hola " << nombre << ", tienes " << edad << " de edad, tu matricula es " << matricula << ", tu calificacion es de " << calificacion << " y tienes alrededor de " << materias << " materias.\n";

}

};

int main() // Funcion principal
{
    Alumnos alumno1("Tadeo", 19, 8756743, 100, 5); // Crear objetos a partir de la clase
    alumno1.setDatos(); // Llamar al metodo para establecer datos
    cout << "Mi horario es de " << alumno1.Horario << endl; // Acceder al atributo publico
    
    return 0;
}