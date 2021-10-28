#include <iostream>
#include <vector>
using namespace std;

bool virus(vector<vector<int>> &M, int r, int c, int pos_x, int pos_y) {
    if (M[pos_x][pos_y] == 1){
        M[pos_x][pos_y] = 0;
        for (int i=pos_x-1; i<=pos_x+1; ++i){
            for (int j=pos_y-1; j<=pos_y+1; ++j){
                if (i>=0 && i<r && j>=0 && j<c)
                    virus(M, r, c, i, j);
            }
        }
        return true;
    }
  return false;
}

int buscar(vector<vector<int>> M, int r, int c){
    int islas = 0;
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            if(virus(M,r,c,i,j))
                islas++;
        }
    }
    return islas;
}

int main(){
    int n;
    int cont=1;

    while(cin>>n){
        vector<vector<int>> M;
        int r = n;
        int c = n;
        string aux;
        while(n--){
            vector<int> vec;
            cin>>aux;
            for(int i=0; i<aux.size(); i++)
                vec.push_back(int(aux[i])-48);
            M.push_back(vec);
        }
        cout<<"Image number "<<cont<<" contains "<<buscar(M,r,c)<<" war eagles."<<endl;
        cont++;
    }
}