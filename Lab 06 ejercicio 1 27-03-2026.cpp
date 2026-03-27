#include <iostream>

using namespace std;
int main(){
    int num1, num2, resultado;
    int opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nSeleccione operaciones:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
    case 1:
        resultado= num1 + num2;
        cout << "Resultado es: " << resultado;
        break;
    case 2:
        resultado= num1 - num2;
        cout << "Resultado es: " << resultado;
        break;
    case 3:
        resultado= num1 * num2;
        cout << "Resultado es: " << resultado;
        break;
    case 4:
        if(num2 != 0) {
        resultado= num1 / num2;
        cout << "Resultado es: " << resultado;
        }else{
            cout << "No se puede dividir entre cero";
        }
        break;
    default:
        cout <<"Opcion invalida";
    }
    return 0;
}
