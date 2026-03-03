#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int nota;
    char letra;
    string estado;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese la nota (0-100): ";
    cin >> nota;


    if (nota >= 90) {
        letra = 'A';
    } else if (nota >= 80) {
        letra = 'B';
    } else if (nota >= 70) {
        letra = 'C';
    } else if (nota >= 60) {
        letra = 'D';
    } else {
        letra = 'F';
    }

   
    if (letra == 'A' || letra == 'B') {
        estado = "Aprobado";
    } else {
        estado = "Reprobado";
    }

    cout << "Estudiante: " << nombre << endl;
    cout << "Nota: " << nota << endl;
    cout << "Letra: " << letra << endl;
    cout << "Estado: " << estado << endl;

    return 0;
}