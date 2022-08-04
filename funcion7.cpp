#include<iostream>
using namespace std;

void primo(int val1);

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    primo(num);

    return 0;
}

void primo(int val1){
    int numDivisores,i;
    for(i=1;i<=val1;i++){
        if(val1 % i==0){
            numDivisores=numDivisores+1;
        }
    }
    if(numDivisores==2){
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"El numero no es primo"<<endl;
        cout<<"El numero tiene "<<numDivisores<<" divisores" <<endl;
    }
}