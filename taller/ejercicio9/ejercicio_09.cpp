#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    double peso, altura, imc;

    cout << "Hola, dime tu nombre: ";
    cin >> nombre; 

    cout << "Ingresa tu peso en kilogramos: ";
    cin >> peso;

    cout << "Ingresa tu altura en metros: ";
    cin >> altura;


    imc = peso / (altura * altura);

    cout << "\n--- Resultado ---" << endl;
    cout << "Usuario: " << nombre << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "IMC: " << imc << endl;


    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" << endl;
        cout << "Accion: Consulta un nutricionista." << endl;
    } else if (imc < 25) {
        cout << "Clasificacion: Normal" << endl;
        cout << "Accion: Mantén tus hábitos saludables." << endl;
    } else if (imc < 30) {
        cout << "Clasificacion: Sobrepeso" << endl;
        cout << "Accion: Haz más actividad física." << endl;
    } else if (imc < 35) {
        cout << "Clasificacion: Obesidad I" << endl;
        cout << "Accion: Busca asesoría médica." << endl;
    } else {
        cout << "Clasificacion: Obesidad II" << endl;
        cout << "Accion: Atención médica especializada." << endl;
    }

    return 0;
}