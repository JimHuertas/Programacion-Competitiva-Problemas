#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int len,i,c,s;
    string a;
    while(true){
        cin>>a;
        if(a=="0")
            break;
        len = a.length();
        string str="";
        for(int i = 0; i<len ; i++ ){
            if(a[i] != ' ' && a[i] != '0'){
                str+=a[i];
                str+=a.substr(i+1,len);
                break;
            }
        }
        len = str.length();
        c = 0;
        for(i = 0; i<len; i++){
            s =c*10+str.at(i)-48;
            c = s%11;
        }
        if(c == 0)
            cout<<a<<" is a multiple of 11."<<endl;
        else 
            cout<<a<<" is not a multiple of 11."<<endl;
    }
    return 0;
}