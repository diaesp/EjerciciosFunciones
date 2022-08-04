#include <iostream>
using namespace std;

void pedir();
int cociente(int a, int b);

int num1,num2;

int main(){
	int resultado;

	pedir();
	resultado=cociente(num1,num2);
	cout<<"El cociente de la division es:  "<<resultado<<endl;
	
	return 0;
}

void pedir(){
	cout<<"Digite un numero:  "; cin>>num1;
	cout<<"Digite otro numero:  "; cin>>num2;
}

int cociente(int a, int b){
	int coci=0;
	
	if(a>b){
	    while(a>=b){
		    a=a-b;
		    coci++;
	    }
    }
	else{	
	    while(b>=a){
		    b=b-a;
		    coci++;
	    }
    }
   	return(coci);
}