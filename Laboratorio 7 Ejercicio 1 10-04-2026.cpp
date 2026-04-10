#include <iostream>
using namespace std;

int main(){
    int n, a=0, b=1, c;

    cout<<"Ingrese cantidad de terminos: ";
    cin>> n;

    for(int i=0; i<=n; i++){
    cout<< a << "/" << (2*i+1);

     if(i <= n-1){
            cout <<"+";
    }

    c=a+b;
    a=b;
    b=c;
}
return 0;
}
