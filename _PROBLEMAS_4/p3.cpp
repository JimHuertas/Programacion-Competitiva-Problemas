#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,v;
    int h = 24;
    vector<int>tarifa;
    while(cin >> n){
        char *ptr = new char[300];
        cin.getline(ptr, 300,'\n');
        
        while(h--){
            cin >> v;
            tarifa.push_back(v);
        }
    }
}