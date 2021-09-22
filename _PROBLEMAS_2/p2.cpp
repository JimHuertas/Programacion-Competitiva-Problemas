#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin>>t;

    int cont=0;
    while(cont<t){
        cin>>n;
        n = (((((n*567)/9)+7492)*235)/47)-498;
        n = (n%100)/10;
        if(n<0)
            n*=-1;
        cout<<n<<endl;
        cont++;
    }
    

    return 0;
}