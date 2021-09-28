#include <iostream>
using namespace std;


int main(){

    while(true){
        int A, B, C, D, tot=0;
        cin>>A>>B>>C>>D;
        if(A==0 & B==0 & C==0 & D==0)
            break;
        tot += 80;
        if(B >= A)
            tot += (B-A);
        else
            tot += (40 - A + B);
        tot += 40;
        if(C <= B)
            tot += (B-C);
        else
            tot += (40 - C + B);
        if(D >= C)
            tot += (D-C);
        else
            tot += (40 - C + D);
        cout<< 3240 - tot*9 <<endl;

    }

    return 0;

}