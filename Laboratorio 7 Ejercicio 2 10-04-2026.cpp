#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, x, suma=1, factorial= 1;

    cout<<"Ingrese cantidad de terminos X: ";
    cin>> x;

    cout<<"Ingrese el valor de N: ";
    cin>> n;

    for(int i=1; i<=n; i++){

    factorial= factorial * (2*i-1)*(2*i);
    suma=suma + pow(x,(2*i)) / factorial;

cout<< "x^" << (2*i) << "/" << (2*i) << "!";


if(i <= n-1){
            cout <<" + ";
    }
}
cout<<endl;
cout<<"Resultado aproximado es: " << suma;

return 0;
}
