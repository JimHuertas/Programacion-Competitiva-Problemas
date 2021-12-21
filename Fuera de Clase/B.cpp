#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T,N,P;
    cin>>T;
    
    while(T--){
        vector<int> num;
        vector<vector<int>> partidos;
        cin>>N;
        cin>>P;
        while(P--){
            int nx;
            cin>>nx;
            num.push_back(nx);
        }

        //parties
        int cont = 0;
        for(int i = 1;i<=N;++i){
            if(i%7==6 || i%7==0) 
                continue;
            bool found = false;
            for(int j = 0;j<P;++j)
                if(i%num[j]==0)
                    found = true;
            if(found) 
                ++cont;
        }
        cout<<cont<<endl;    
    }
}