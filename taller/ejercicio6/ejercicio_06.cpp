#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Ingrese el primer numero (x): ";
    cin >> x;
    cout << "Ingrese el segundo numero (y): ";
    cin >> y;

    cout << "\nValores iniciales: x = " << x << ", y = " << y << endl;


    cout << "\nMetodo (a) con variable temporal:" << endl;
    int temp = x; 
    x = y;        
    y = temp;     
    cout << "Resultado: x = " << x << ", y = " << y << endl;

    
    cout << "\nRestaurando valores originales..." << endl;
    cout << "Ingrese nuevamente x: ";
    cin >> x;
    cout << "Ingrese nuevamente y: ";
    cin >> y;


    cout << "\nMetodo (b) con operaciones aritmeticas:" << endl;
    x = x + y; 
    y = x - y; 
    x = x - y; 
    cout << "Resultado: x = " << x << ", y = " << y << endl;

 
    cout << "\nRestaurando valores originales..." << endl;
    cout << "Ingrese nuevamente x: ";
    cin >> x;
    cout << "Ingrese nuevamente y: ";
    cin >> y;


    cout << "\nMetodo (c) con XOR:" << endl;
    x = x ^ y;
    y = x ^ y; 
    x = x ^ y; 
    cout << "Resultado: x = " << x << ", y = " << y << endl;

    return 0;
}