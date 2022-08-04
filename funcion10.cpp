#include <iostream>
using namespace std;

float suma(int a);

int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;

    suma(n);

    cout<<"La suma es: "<<suma(n);
    return 0;
}

float suma(int n){
    int fac=1, denomi=0;
    float sum, denomi_2, numera=0;
    for(int i=1;i<=n;i++){
        fac = fac * i;
        denomi = denomi + i;
        numera = numera + fac;
    }
    denomi_2 = denomi * 2;
    sum = numera / denomi_2;
    return (sum);
}