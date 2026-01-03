#include <iostream>
using namespace std;

class Cliente {
    // Atributos
    public:
    int edad;
    string nombre;
    string direccion;
    string numeroDelCliente;
    string numeroDeTelefono;

    // Constructor por defecto
     Cliente() {
            nombre = "";
            edad = 0;
            direccion = "";
            numeroDelCliente = "";
            numeroDeTelefono = "";
        }


    void setNombre() { // Metodo para asignar el nombre del cliente
        cout << "Ingresa el nombre del cliente: ";
        cin >> nombre;
        if (nombre.length() < 3) {
            cout << "Error: El nombre debe tener al menos 3 caracteres. Por favor, ingresa un nombre valido." << endl;
        }
        else {
            cout << "Nombre registrado correctamente." << endl;
        }
    }

    void setEdad() { // Metodo para asignar la edad del cliente
        cout << "Ingresa la edad del cliente: ";
        cin >> edad;
        if (edad <= 0) {
            cout << "Error: La edad no puede ser negativa o igual a 0. Por favor, ingresa una edad valida." << endl;
        }
        else {
            cout << "Edad registrada correctamente." << endl;
        }
    }

    void setDireccion() { // Metodo para asignar la direccion del cliente
        cout << "Ingresa la direccion del cliente: ";
        cin >> direccion;
        if (direccion.length() < 5) {
            cout << "Error: La direccion debe tener al menos 5 caracteres. Por favor, ingresa una direccion valida." << endl;
        }
        else {
            cout << "Direccion registrada correctamente." << endl;
        }
    }

    void setNumeroDelCliente() { // Metodo para asignar el numero del cliente
        cout << "Ingresa el numero del cliente: ";
        cin >> numeroDelCliente;
        if (numeroDelCliente.length() < 5) {
            cout << "Error: El numero del cliente debe tener al menos 5 caracteres. Por favor, ingresa un numero valido." << endl;
        }
        else {
            cout << "Numero del cliente registrado correctamente." << endl;
        }
    }

    void setNumeroDeTelefono() { // Metodo para asignar el numero de telefono del cliente
        cout << "Ingresa el numero de telefono del cliente: ";
        cin >> numeroDeTelefono;
        if (numeroDeTelefono.length() < 10) {
            cout << "Error: El numero de telefono debe tener al menos 10 caracteres. Por favor, ingresa un numero valido." << endl;
        }
        else {
            cout << "Numero de telefono registrado correctamente." << endl;
        }
    }
   
    void checarSaldo() { // Metodo para checar el saldo del cliente

    }

    void introducirSaldo() { 

    }

};

int main() {
    cout << "***** BANCO DE CLIENTES *****" << endl;
    // Crear objetos
    Cliente cliente1;
    Cliente cliente2;
    Cliente cliente3;

    cliente1.setNombre();
    cliente2.setNombre();
    cliente3.setNombre();

    cliente1.setEdad();
    cliente2.setEdad();
    cliente3.setEdad();

    cliente1.setDireccion();
    cliente2.setDireccion();
    cliente3.setDireccion();
    
    cliente1.setNumeroDelCliente();
    cliente2.setNumeroDelCliente();
    cliente3.setNumeroDelCliente();

    cliente1.setNumeroDeTelefono();
    cliente2.setNumeroDeTelefono();
    cliente3.setNumeroDeTelefono();

    cout << "Gracias por registrar a los clientes." << endl;

    cout << "***** BANCO DE CLIENTES *****" << endl;

    return 0;
}