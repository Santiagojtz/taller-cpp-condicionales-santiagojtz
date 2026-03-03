#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Hola, ingresa un año: ";
    cin >> anio;

    bool divisiblePor4 = (anio % 4 == 0);
    bool divisiblePor100 = (anio % 100 == 0);
    bool divisiblePor400 = (anio % 400 == 0);

    cout << "\n--- Verificando paso a paso ---" << endl;
    cout << "¿Es divisible por 4? " << (divisiblePor4 ? "Si" : "No") << endl;
    cout << "¿Es divisible por 100? " << (divisiblePor100 ? "Si" : "No") << endl;
    cout << "¿Es divisible por 400? " << (divisiblePor400 ? "Si" : "No") << endl;

    bool esBisiesto = (divisiblePor4 && (!divisiblePor100 || divisiblePor400));

    cout << "\nResultado: El anioo " << anio 
         << (esBisiesto ? " es bisiesto." : " no es bisiesto.") 
         << endl;

    return 0;
}