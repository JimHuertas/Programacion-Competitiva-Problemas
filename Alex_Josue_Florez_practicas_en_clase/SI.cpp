#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    set<pair<string,int> > suffix_index;
    string cad;
    cin>>cad;
    for(int i=0; i<cad.size(); i++){
        if(i==0)
            suffix_index.insert(pair<string,int>(cad, 0));
        else
            suffix_index.insert(pair<string, int>(cad.substr(i, cad.size()), i));
    }

    set<pair<string,int> >::iterator it= suffix_index.begin();
    while(it != suffix_index.end()){
        cout<<it->first<< "   "<< it->second<<endl;
        it++;
    }


    
}