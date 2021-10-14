#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool encontrar(vector<int> &vec, int num){
    for(int i : vec)
        if(num == i)
            return true;
    return false;
}

void agregar(vector<vector<int>> &matrix ,int f1, int f2){
    for(int i: matrix[f1]){
        if(i!=f2 && !encontrar(matrix[i], f2))
            matrix[i].push_back(f2);
    }

    for(int i: matrix[f2]){
        if(i!=f1 && !encontrar(matrix[i], f1))
            matrix[i].push_back(f1);
    }
}   


int main(){
    /*int tam;
    cin>>tam;
    int cont=0;


    int N,M;
    while(cont<tam){
        cin>>N>>M;
        vector<vector<int>> amigos;
        for(int i=0; i<N+1; i++){
            vector<int> aux(0);
            amigos.push_back(aux);
        }
        
        int f1, f2;
        for(int i=0; i<M; i++){
            cin>>f1>>f2;
            if(!encontrar(amigos[f1],f2))
                amigos[f1].push_back(f2);
            if(!encontrar(amigos[f2],f1))
                amigos[f2].push_back(f1);
            agregar(amigos, f1, f2);
            
        }


        int resultado=0;
        for(int i=1; i<amigos.size(); i++){
            /*cout<<i<<" -> ";
            for(int j=0; j<amigos[i].size(); j++)
                cout<<amigos[i][j]<<"  ";
            cout<<endl; ///*
            if(resultado < amigos[i].size()+1)
                resultado = amigos[i].size()+1;
            
        }
            
        
        cout<<resultado<<endl;

        cont++;
    }*/
    vector<int> ga(3) ;
    for(int i=0; i<ga.size(); i++)
        cout<<ga[i]<<endl;

}