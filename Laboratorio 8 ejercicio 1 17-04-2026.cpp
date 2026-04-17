#include <iostream>
using namespace std;

int main(){
    int numero, digito, contadorAPP=0,mayor5=0;
    float promedio, total_horas=0;


  do{
    cout<<"Ingrese un numero entero positivo: ";
    cin>> numero;

    if(numero < 0){
        cout<<"Error: Numero negativo. Intente nuevamente\n";
    }
    }while(numero < 0);


    while(numero > 0){
    digito=numero % 10;
    total_horas=total_horas+digito;
    contadorAPP++;

    if(digito > 5){
        mayor5++;
    }

    numero=numero/10;


    promedio=total_horas/contadorAPP;
           }

    cout<<"Total de horas: "<<total_horas<<endl;
    cout<<"Aplicaciones usadas: "<<contadorAPP<<endl;
    cout<<"App con mas de 5 horas: "<<mayor5<<endl;
    cout<<"Promedio de horas: "<<promedio<<endl;

    return 0;
}
