#include <iostream>
#include <algorithm>
using namespace std;


#include <set>
void analisis(set<string> &vec, string cad, const int N){
    string aux="";
    for(char i : cad){
        aux+=i;
        if(vec.size()==N)
            break;
        vec.insert(aux);
    }
}

string suffix_Array(string &cad, int long long N){
    set<pair<string,int long long >> suffix;
    set<string> resultado;
    for(int i=0; i<cad.size(); i++){
        if(i==0)
            suffix.insert(pair<string,int long long>(cad, 0));
        else
            suffix.insert(pair<string, int long long>(cad.substr(i, cad.size()), i));
    }
    
    set<pair<string,int long long >>::iterator it= suffix.begin();
    while(it++!=suffix.end()){
        analisis(resultado, it->first, N);
        if(resultado.size() >= N)
            break;
        
    }
    
    set<string>::iterator it2=resultado.end();
    it2--;
    return *it2;
}

int main(){
    string cad;
    int long long n;
    cin>>cad;
    cin>>n;
    //set<pair<string,int long long>> arr = suffix_Array(cad, n);
    string vec = suffix_Array(cad,n-1);
    cout<<vec<<endl;
    return 0;
}