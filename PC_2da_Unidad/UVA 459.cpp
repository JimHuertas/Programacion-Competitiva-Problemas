#include <iostream>
#include <string>
using namespace std;

void Make_Set(int x, int rank[], int parent[]){
    parent[x]=x;
    rank[x]=0;
}

int Find(int x, int parent[]){
    if(x!=parent[x]) parent[x]=Find(parent[x], parent);
    return parent[x];
}

void Union(int &x, int &y, int rank[], int parent[]){
    int PX=Find(x, parent),PY=Find(y, parent);
    if(rank[PX]>rank[PY])
        parent[PY]=PX;
    else{
        parent[PX]=PY;
        if(rank[PX]==rank[PY])
            rank[PY]++;
    }
}

int main(){
    int parent[26];
    int rank[26];
    int T,n,x,y,ans;
    char c;
    string s;
    
    scanf("%d\n\n",&T);
    
    for(int tc=1;tc<=T;tc++){
        getline(cin,s);
        n=s[0]-'A'+1;
        
        ans=n;
        for(int i=0;i<n;i++) Make_Set(i, rank, parent);
        
        while(1){
            if(!getline(cin,s) || s.empty()) break;
            
            x=s[0]-'A'; y=s[1]-'A';
            
            if(Find(x, parent)!=Find(y, parent)){
                Union(x, y, rank, parent);
                ans--;
            }
        }
        
        if(tc!=1) printf("\n");
        printf("%d\n",ans);
    }
    
    return 0;
}