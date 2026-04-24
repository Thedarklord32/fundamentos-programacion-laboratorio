#include <iostream>
#include <iomanip>
using namespace std;

float promedioValores(int n);

int main(){
    int n;

    cout<<"Ingrese la cantidad de valores: ";
    cin>> n;

    if(n>0){
        cout << fixed << setprecision(3);
        float promedio= promedioValores(n);
            cout<<"El promedio de los " << n <<" valores es: "<<promedio<<endl;
        }else{
            cout<<"Debes Ingresar una cantidad positiva de valores"<<endl;
        }

        return 0;
        }

        float promedioValores(int n){
            int suma=0, valor;
            for(int i=1; i<=n; i++){
                cout<<"Ingrese el valor "<< i <<" : ";
                cin>> valor;
                suma= suma + valor;
            }
            return suma/n;
        }
