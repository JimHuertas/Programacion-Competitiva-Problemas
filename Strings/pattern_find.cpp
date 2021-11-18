#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<long int> findPattern(string &word, string &patron){
    vector<long int> results;
    long int pos = word.find(patron);
    while(pos != string::npos){
        results.push_back(pos+1);
        pos = word.find(patron, pos+1);
    }

    return results;
}

int main(){
    char *ptr = new char[1000002];
    int N;
    cin>>N;

    string patron, word;
    cin.ignore();
    while(cin.getline(ptr,1000000,'\n')){
        patron = ptr;
        int pos = patron.find(" ");
        //separar la palabra del patron a seguir
        word = patron.substr(0, pos);
        patron.erase(0, pos+1);
        vector<long int> cont = findPattern(word, patron);
        if(cont.size()!=0){
            cout<<cont.size()<<endl;
            for(long int &i : cont)
                cout<<i<<" ";
            cout<<endl;
        } else{
            cout<<"Not Found"<<endl;
        }
        cout<<endl;
    }
}