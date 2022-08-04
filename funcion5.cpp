#include<iostream>
using namespace std;

int perfecto(int val1);
int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    perfecto(num);
    return 0;
}

int perfecto(int val1){
    int div=0,suma=0,i;
    for(i=1;i<val1;i++){
        if(val1%i==0){
            div=i;
            suma+=div;
        }
    }
    if(suma==val1){
        cout<<"Es un numero perfecto";
    }
    else{
        cout<<"No es un numero perfecto";
    }
    return 0;
}