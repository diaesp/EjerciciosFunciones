#include <iostream>
using namespace std;

void pedir();
int resto(int a, int b);

int num1,num2;

int main(){
	int resultado;
	
	pedir();
	resultado=resto(num1,num2);
	cout<<"El resto de la division es:  "<<resultado<<endl;
	
	return 0;
}

void pedir(){
	cout<<"Digite un numero:  "; cin>>num1;
	cout<<"Digite el segundo numero:  "; cin>>num2;
}

int resto(int a, int b){
    int rest=0;
    while(a>=b){
        a=a-b;
        rest++;
    }
    return(a);
}
