#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese el primer lado: ";
    cin >> a;
    cout << "Ingrese el segundo lado: ";
    cin >> b;
    cout << "Ingrese el tercer lado: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Es un triángulo válido." << endl;

        
        if (a == b && b == c) {
            cout << "Equilátero" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Isósceles" << endl;
        } else {
            cout << "Escaleno" << endl;
        }

        
        double maxLado = max(a, max(b, c));
        double sumaOtros = (a == maxLado ? pow(b,2)+pow(c,2) :
                           (b == maxLado ? pow(a,2)+pow(c,2) :
                                           pow(a,2)+pow(b,2)));

        if (pow(maxLado,2) == sumaOtros) {
            cout << "Rectángulo" << endl;
        } else if (pow(maxLado,2) < sumaOtros) {
            cout << "Acutángulo" << endl;
        } else {
            cout << "Obtusángulo" << endl;
        }
    } else {
        cout << "No es un triángulo válido." << endl;
    }

    return 0;
}