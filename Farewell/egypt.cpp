#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    int asqure, bsqure, csqure;
    while(true){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;

        asqure = a*a;
        bsqure =b*b;
        csqure =c*c;
        
        if((asqure+bsqure==csqure)||(bsqure+csqure==asqure)||(csqure+asqure==bsqure))
            cout<<"right\n";
        else cout<<"wrong\n";
    }

}