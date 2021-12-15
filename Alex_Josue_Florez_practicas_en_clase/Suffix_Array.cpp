#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> suffix_Array(string &cad){
    set<pair<string,int> > suffix;
    vector<int> suffix_arr;
    for(int i=0; i<cad.size(); i++){
        if(i==0)
            suffix.insert(pair<string,int>(cad, 0));
        else
            suffix.insert(pair<string, int>(cad.substr(i, cad.size()), i));
    }

    cout<<"Resultado: "<<endl;
    set<pair<string,int> >::iterator it= suffix.begin();
    while(it != suffix.end()){
        cout<<it->second<< "   "<< it->first<<endl;
        suffix_arr.push_back(it->second);
        it++;
    }

    return suffix_arr;
}

int main(){
    string cad = "camel";
    vector<int> result = suffix_Array(cad);
    cout<<"\nResultados del SA: ";
    for(int &i : result){
        cout<<i<<"  ";
    }
    cout<<endl;
}