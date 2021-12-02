#include <iostream>
using namespace std;


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}


long long toG(int N){
    long long G=0;
    for(int i=1;i<N;i++)
        for(int j=i+1;j<=N;j++){
            G+=gcd(i,j);
        }

    return G;
}


int main(){
    int N;
    while(true){
        cin>>N;
        if(N==0)
            break;
        cout<<toG(N)<<endl;
    }

}
