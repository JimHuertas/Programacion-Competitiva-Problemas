#include <iostream>
using namespace std;

void avanzar1Espacio(string &txt, int i){
    txt+=txt[txt.size()-1];
    for(int j = txt.size()-2; j>i; j--){
        txt[j] = txt[j-1];
    }
    txt[i]=' ';
}

int main(){
    char text[100];
    string todo = "";
    int cont=0;

    while(cin.getline(text, 100, '\n')){
        char *ptr = text;
        todo = ptr;
        for(int i=0; i<todo.size(); i++)
            if(todo[i] == '\"'){
                avanzar1Espacio(todo, i);
                if(cont%2 == 0){
                    todo[i]='`';
                    todo[i+1]='`';
                    cont++;
                }else{
                    todo[i]='\'';
                    todo[i+1]='\'';
                    cont++;
                } 
            }
        
        cout<<todo<<endl;
    }

    return 0;
}