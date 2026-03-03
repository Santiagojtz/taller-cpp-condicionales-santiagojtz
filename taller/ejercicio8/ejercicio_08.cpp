#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    double saldo = 3000.0; 
    int opcion;
    int transacciones = 0;

    cout << "Hola, ingresa tu nombre: ";
    getline(cin, usuario);

    cout << "Tienes $" << saldo << " disponible." << endl;
    cout << "Puedes elegir estas opciones:" << endl;
    cout << "(1) Depositar" << endl;
    cout << "(2) Retirar" << endl;
    cout << "(3) Consultar" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double deposito;
            cout << "Ingrese la cantidad a depositar: ";
            cin >> deposito;
            if (deposito > 0) {
                saldo += deposito; 
                transacciones++;
                cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Cantidad invalida." << endl;
            }
            break;
        }
        case 2: {
            double retiro;
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retiro;
            if (retiro > 0 && retiro <= saldo) {
                saldo -= retiro; 
                transacciones++;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Error: saldo insuficiente o cantidad invalida." << endl;
            }
            break;
        }
        case 3:
            cout << "Consulta de saldo: $" << saldo << endl;
            transacciones++;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    cout << "\nUsuario: " << usuario << endl;
    cout << "Numero de transacciones realizadas: " << transacciones << endl;

    return 0;
}