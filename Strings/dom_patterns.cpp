#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findPattern(string &word, string &patron){
    int results=0;
    long int pos = word.find(patron);
    while(pos != string::npos){
        results++;
        pos = word.find(patron, pos+1);
    }

    return results;
}


int main(){
    int N;

    string cadena, word;
    while(true){
        cin>>N;
        if(N==0)
            break;
        vector<string> patrones;
        while(N--){
            cin>>word;
            patrones.push_back(word);
        }
        cin>>cadena;
        int max=0;
        int pos=0;
        vector<int> res;
        for(int i=0; i<patrones.size(); i++){
            int num = findPattern(cadena, patrones[i]);
            res.push_back(num);
            if(max < num){
                pos = i;
                max = num;
            }
        }
        cout<<max<<endl;
        for(int i=0; i<res.size(); i++)
            if(max == res[i])
                cout<<patrones[i]<<endl;
        
    }
    
    return 0;
}