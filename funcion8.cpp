#include<iostream>
using namespace std;

int comb(int m, int n);

int main(){
    int ct, el;
    cout<<"Ingrese la cantidad total de elementos: ";
    cin>>ct;
    cout<<"Ingrese de cuantos elementos estan formados los grupos: ";
    cin>>el;

    int c=comb(ct, el);
    cout<<"El numero de combinaciones es: "<<c<<endl;
    return 0;
}

int comb(int m, int n){
    int fm=1, fn=1, fmn=1, c, K;
    for(K=1; K<=m; K++){
        fm=fm*K;
    }
    for(K=1; K<=n; K++){
        fn=fn*K;
    }
    for(K=1; K<=m-n; K++){
        fmn=fmn*K;
    }
    c=fm/(fn*fmn);
    return(c);
}