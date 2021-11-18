#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int findPrimos(int num){
    int results=0;
    int factor=2;
    for(int i=2; num>1; i++){
        int contador=0;
        while (num%i == 0){
            contador++;
            num=num/i;
            if(num%i != 0){
                if(contador>=1)
                    results+=contador;
            }
        }
        
    }
    return results;
}

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
    cin>>N;
    cin.ignore();
    string cadena, repetido;
    while(N--){
        cin>>cadena;
        int pos=0;
        for(int i=1; i<cadena.size(); i++)
            if(cadena[0]==cadena[i]){
                pos = i;
                break;
            }
        repetido= cadena.substr(0,pos);
        int num1 = findPattern(cadena, repetido);
        int num2 = repetido.size();
        int resultado = findPrimos(num1*num2);
        cout<<resultado<<endl;
    }
    
    return 0;
}