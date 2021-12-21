#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    int cont=0;
    while(T--){
        
        vector<int> vec;
        int N,Q;
        int min;
        cin>>N>>Q;
        while(N--){
            int aux;
            cin>>aux;
            vec.push_back(aux);
        }
        cont++;
        cout<<"Scenario #"<<cont<<":"<<endl;
        while(Q--){
            vector<int> aux = vec;
            int i,j;
            cin>>i>>j;
            vector<int>::iterator itb = aux.begin()+i-1;
            vector<int>::iterator ite = aux.begin()+j;
            sort(itb, ite);
            cout<<*itb<<endl;
            aux.clear();
            /*min = *it;
            while(++it != vec.begin()+j){
                
                if(*it < min)
                    min = *it;
            }
            cout<<min<<endl;*/
        }
    }
}