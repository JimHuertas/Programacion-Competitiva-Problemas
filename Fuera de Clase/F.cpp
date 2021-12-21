#include <iostream>
#include <vector>
#include <string>
using namespace std;

char product(vector<int> &vec, int t1, int t2){

}


int main(){
    int N, K;
    while (cin>>N>>K){
        vector<int> vec(N);
        string cad;

        int cont=0;
        while (N--){
            int aux;
            cin>>aux;
            vec.push_back(aux);
            cont++;
        }
        while(K--){
            char opc;
            int p1,p2;
            cin>>opc>>p1>>p2;
            cout<<opc<<"  "<<p1<<"  "<<p2<<endl;
            if(opc == 'C'){
                vec[p1-1] = p2;
            }
            else if(opc == 'P'){
                
            }
            
        }
    }
    
        

    
}