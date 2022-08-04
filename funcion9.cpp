#include<iostream>
using namespace std;

int MCD(int a, int b);
int MCM(int a, int b);

int main(){
    int num1, num2;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;

    int rest = MCD(num1, num2);
    cout<<"El maximo comun divisor de "<<num1<<" y "<<num2<<" es: "<<rest<<endl;

    int mayor=MCM(num1, num2);
    cout<<"El minimo comun multiplo de "<<num1<<" y "<<num2<<" es: "<<mayor<<endl;

    return 0;
}

int MCD(int a, int b){
    int rest=1;
    for(int i=1;i<=a;i++){
        if((a%i==0) && (b%i==0)){
            rest=i;
        }
    }
    return(rest);
}

int MCM(int a, int b){
    int mayor;
    if(a>b){
        mayor=a;
    }
    else{
        mayor=b;
    }
    int n=mayor;
    while((n%a!=0) || (n%b!=0)){
        n=n+1;
    }
    return(n);
}