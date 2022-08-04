#include<iostream>
using namespace std;

void resta(int val1, int val2);
int producto(int val1, int val2);
void suma(int val1, int val2);
void division(int val1, int val2);

int main(){
    int num1,num2,resultado;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    
    resta(num1,num2);
    resta(num2,num1);
    suma(num1,num2);
    division(num1,num2);

    resultado = producto(num1,num2);

    cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado;
    
    return 0;
}

void resta(int val1, int val2){
    int sustrac;
    sustrac = val1-val2;
    cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}

int producto(int val1, int val2){
    int prod;
    prod = val1*val2;
    return(prod);
}

void suma(int val1, int val2){
    int sum;
    sum = val1+val2;
    cout<<"\nLa suma de "<<val1<<" + "<<val2<<" es: "<<sum;
}

void division(int val1, int val2){
    int cociente;
    if(val2!=0){
    cociente = val1/val2;
    cout<<"\nLa division de "<<val1<<" / "<<val2<<" es: "<<cociente;
    }
    else{
        cout<<" ERROR";
        }
}