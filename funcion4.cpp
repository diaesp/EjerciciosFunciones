#include<iostream>
#include<stdlib.h>
using namespace std;


void fibonacci(int val1);
int main(){
    int num;
    cout<<"Digite el numero de elementos: "; cin>>num;

    fibonacci(num);
    return 0;
}
void fibonacci(int val1){
    int x=1,a=0,b=1;
    while(x<=val1){
        if(x%2==1){
            cout<<a;
            a=a+b;
        }
        else{
            cout<<b;
            b=b+a;
        }
        x=x+1;
    }
}