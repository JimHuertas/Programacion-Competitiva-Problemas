#include <iostream>
using namespace std;

int sumaDig(int n){
    if(n/10 <= 0){return n;}
    int aux = n % 10;
    n/=10;
    return aux + sumaDig(n);
}

int main(){
    int n=1, resul;
    while(cin>>n){
        if(n==0)
            break;
        resul = sumaDig(n);
        while(resul>9)
            resul = sumaDig(resul);
        cout<<resul<<endl;
    }
    

    return 0;
}