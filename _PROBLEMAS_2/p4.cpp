#include <iostream>
using namespace std;


int main(){
    int T, cont=0;
    string a;
    cin>>T;
    while(cont<T){
        cin>>a;
        int suma=0;
        int anterior=0;
        for(int i=0; i<a.size();i++){
            //cout<<"La suma: "<<suma<<endl;
            if(a[i] == 'O'){
                suma += 1 + anterior; 
                anterior++;
            } 
            else if(a[i] == 'X')
                anterior = 0;
        }   
        cout<<suma<<endl;
        cont++;
    }
    

    return 0;
}