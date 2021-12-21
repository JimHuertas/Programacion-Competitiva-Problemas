#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void analizar(vector<int> &v1, vector<int> &v2, int N){
    vector<int>::iterator it;
    int v;
    v2[0]=1;
        for(int i=0; i<N-1; ++i){
            v=abs(v1[i+1]-v1[i]);
            if(v>0&&v<N)
            v2[v]=1;
        }

        it=find(v2.begin(), v2.end(), 0);
        if(it==v2.end())
            cout<<"Jolly"<<endl;
        else
        cout<<"Not jolly"<<endl;
}

int main(){
    vector<int> v1;
    vector<int> v2;
   
    int num;
    int N;
  
    while(cin>>N){
        v1.clear();
        v2.clear();
        int tam = N;
        while(tam--){
            cin>>num;
            v1.push_back(num);
            v2.push_back(0);
        }
        analizar(v1,v2,N);
        
    }
  
    return 0;
}