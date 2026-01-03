#include <iostream>
#include <string>
using namespace std;

class Persona {
    protected: // Atributos para herencia
        string nombre;
        string genero;
        int edad;

    public:
        Persona(string n, string g, int e) : nombre(n), genero(g), edad(e) {} // Constructor con parametros por defecto

        Persona() { //Constructor por defecto
        string nombre = "";
        string genero = "";
        int edad = 0;

        }

        void setDatos() { // Metodo para establecer y mostrar los datos de una persona
            cout << "Introduce el nombre: ";
            cin >> nombre;

            cout << "Introduce el genero: ";
            cin >> genero;

            cout << "Introduce la edad: ";
            cin >> edad;

            cout << "Datos: " << '\n';
            cout << "Nombre: " << nombre << '\n';
            cout << "Genero: " << genero << '\n';
            cout << "Edad: " << edad << '\n';
        }
};

class Cliente: public Persona { // Herencia de la clase persona
    private:
        int numDeCliente;
        float saldoDisponible;
        bool comprar;

    public:
        Cliente(string n, string g, int e, int nc, float sd, bool c) : Persona(n,g,e), numDeCliente(nc), saldoDisponible(sd), comprar(c) {}

        Cliente() {
            int numDeCliente = 0;
            float saldoDisponible = 0.0;
            bool comprar = false;
        }

        void setDatosCliente() { // Metodo para establecer y mostrar los datos del cliente
            cout << "Introduce el numero Del cliente: ";
            cin >> numDeCliente;

            cout << "Introduce el saldo: ";
            cin >> saldoDisponible;

            cout << "Compraste? (1 = si, 0 = no): ";
            cin >> comprar;

            cout << "Los datos son: " << '\n';
            cout << "numero del cliente " << numDeCliente << '\n';
            cout << "saldo " << saldoDisponible << '\n';
            cout << "Compraste " << comprar << '\n';
        }
};

class Empleado: public Persona { // Herencia de la clase persona
    private:
        int numDeEmpleado;
        string puesto;
        float salario;

    public:
        Empleado(string n, string g, int e, int ne, string p, float s) : Persona(n,g,e), numDeEmpleado(ne), puesto(p), salario(s) {}

        Empleado() {
            int numDeEmpleado = 0;
            string puesto = "";
            float salario = 0.0;
        }

        void setDatosEmpleado() { // Metodo para establecer y mostrar los datos del empleado
            cout << "Introduce el numero del o de la empleado/a: ";
            cin >> numDeEmpleado;

            cout << "Introduce el puesto: ";
            cin >> puesto;

            cout << "Introduce el salario: ";
            cin >> salario;

            cout << "Los datos son: " << '\n';
            cout << "Numero del empleado: " << numDeEmpleado << '\n';
            cout << "Puesto: " << puesto << '\n';
            cout << "Salario: " << salario << '\n';
        }
};

int main() {
    Cliente c1;
    Empleado e1;

    c1.setDatos();
    c1.setDatosCliente();

    e1.setDatos();
    e1.setDatosEmpleado();

    return 0;
}