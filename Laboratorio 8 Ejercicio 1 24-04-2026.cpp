#include <iostream>
using namespace std;

int sumarHastaN(int n);

    int main(){
        int n;

        cout<<"Ingresar valor de N: ";
        cin>> n;

        if(n>0){
        int resultado = sumarHastaN(n);
            cout<<"La suma desde de 1 hasta " << n <<" es: "<<resultado<<endl;
        }else{
            cout<<"Debes Ingresar un numero entero positivo"<<endl;
        }

        return 0;
        }

        int sumarHastaN(int n){
            int suma=0;
            for(int i=1; i<=n; i++){
                suma= suma + i;
            }
            return suma;
        }
