#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa otro segundo numero: ";
    cin >> b;
    cout << "Ingrese el operador que vas a usar (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Resultado: " << (a + b) << endl;
            break;
        case '-':
            cout << "Resultado: " << (a - b) << endl;
            break;
        case '*':
            cout << "Resultado: " << (a * b) << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: division por cero" << endl;
            } else {
                cout << "Resultado: " << (a / b) << endl;
            }
            break;
        case '%':
            if (b == 0) {
                cout << "Error: modulo por cero" << endl;
            } else {
                cout << "Resultado: " << fmod(a, b) << endl;
            }
            break;
        default:
            cout << "Operador no valido" << endl;
    }

    return 0;
}