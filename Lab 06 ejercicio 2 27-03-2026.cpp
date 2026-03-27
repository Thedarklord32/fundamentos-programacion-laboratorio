#include <iostream>

using namespace std;
int main(){
    float c, resultado;
    int opcion;

    cout << "Ingrese la cantidad en grados celcius: ";
    cin >> c;

    cout << "\nSeleccione operaciones:\n";
    cout << "1. Fahrenheit\n";
    cout << "2. Kelvin\n";
    cout << "3. Rankine\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
    case 1:
        resultado= (c*(9/5))+32;
        cout << "Resultado es: " << resultado;
        break;
    case 2:
        resultado= c+273.15;
        cout << "Resultado es: " << resultado;
        break;
    case 3:
        resultado= (c*(9/5))+491.67;
        cout << "Resultado es: " << resultado;
        break;
    default:
        cout <<"Opcion invalida";
    }
    return 0;
}
