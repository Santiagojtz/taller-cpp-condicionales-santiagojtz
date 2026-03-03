#include <iostream>
using namespace std;



int main() {
          const int LEER     = 1; 
          const int ESCRIBIR = 2; 
          const int EJECUTAR = 4; 
   
    int valor;

    cout << "Ingrese un numero entero de permisos: ";
    cin >> valor;

    cout << "Permisos asignados:" << endl;

    
    if (valor & LEER) {
        cout << "- LEER" << endl;
    }
    if (valor & ESCRIBIR) {
        cout << "- ESCRIBIR" << endl;
    }
    if (valor & EJECUTAR) {
        cout << "- EJECUTAR" << endl;
    }

    return 0;
}