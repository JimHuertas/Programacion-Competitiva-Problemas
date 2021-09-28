#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n,a,b,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
    if(a>b){
        cout<<">"<<endl; 
    }
    else if (a<b){
        cout<<"<"<<endl;
    }
    else{
        cout<<"="<<endl;
    }

}