#include<iostream>
using namespace std;

int numerosamigos(int val1);

int main(){
    int num1,num2,acum,acum2;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    acum = numerosamigos(num1);
    acum2= numerosamigos(num2);
    if(acum==num2 && acum2==num1){
        cout<<"Los numeros son amigos";
    }
    else{
        cout<<"Los numeros no son amigos";
    }
    return 0;
}

int numerosamigos(int val1){
    int divisor=1,acum=0;
    while(divisor<val1){
        if(val1%divisor==0){
            acum=acum+divisor;
        }
        divisor++;
    }
    return acum;
}