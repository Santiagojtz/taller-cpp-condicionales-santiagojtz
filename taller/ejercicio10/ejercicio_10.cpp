#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string empleado;
    char tipoCliente; 
    double monto;
    int cupon;
    bool finDeSemana;
    double descuento = 0.0;

    cout << "Hola Empleado, ingresa tu nombre: ";
    cin >> empleado;

    cout << "Selecciona el tipo de cliente (V = VIP, N = Normal): ";
    cin >> tipoCliente;

    cout << "Ingresa el monto de la compra: ";
    cin >> monto;

    cout << "Ingresa el codigo de cupon (1, 2, 3): ";
    cin >> cupon;

    cout << "¿Es fin de semana? (1 = Si, 0 = No): ";
    cin >> finDeSemana;

  
    if (tipoCliente == 'V' || tipoCliente == 'v') {
        descuento += 0.10; 
    } else {
        descuento += 0.05; 
    }

   
    if (monto > 500) {
        descuento += 0.10;
    } else if (monto > 200) {
        descuento += 0.05;
    }

 
    switch (cupon) {
        case 1:
            descuento += 0.05;
            break;
        case 2:
            descuento += 0.10;
            break;
        case 3:
            descuento += 0.15;
            break;
        default:
            cout << "Cupon invalido, sin descuento adicional." << endl;
    }

    
    if (finDeSemana) {
        descuento += 0.05;
    }

  
    descuento = min(descuento, 0.50);

 
    double precioFinal = monto * (1 - descuento);

    cout << "\n--- Resultado ---" << endl;
    cout << "Empleado: " << empleado << endl;
    cout << "Monto original: $" << monto << endl;
    cout << "Descuento total aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Precio final: $" << precioFinal << endl;

    return 0;
}