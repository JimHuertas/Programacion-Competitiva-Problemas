#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    int N; 
    int total=0;
    cin>>N;

    while(total<N){
        stack<char> word;
        char aux1[300];
        cin.ignore();
        cin.getline(aux1,300,'\n');
        char *ptr = aux1;
        string cadena = ptr;

        for(int i=0; i<cadena.size(); i++){
            if(cadena[i] == '[' || cadena[i] == '{' || cadena[i] == '(')
                word.push(cadena[i]);
            if(cadena[i] == '}'  && !word.empty())
                if(word.top()=='{')
                    word.pop();
            if( cadena[i] == ']' && !word.empty())
                if(word.top()=='[')
                    word.pop();
            if( cadena[i] == ')' && !word.empty())
                if(word.top()=='(')
                    word.pop();
        }
 
        if(word.empty())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        total++;
    }
    

    return 0;
}