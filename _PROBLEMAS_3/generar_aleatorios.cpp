#include <time.h>
#include <iostream>
using namespace std;

int main(){
    int num;
    srand(time(NULL));
    for(int k=100; k<1000; k+=100){
        cout<<k<<endl;
        for(int i=0; i<k; i++){
            num = 1 + rand() % (1000 - 1);
            cout << num<<endl;
        }
    }
}