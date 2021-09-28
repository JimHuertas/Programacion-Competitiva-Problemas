#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int stringToInt(string txt){
    return stoi(txt);
}

vector<int> vecWeeks(string aux){
    vector<int> resultados;
    istringstream isstream(aux);
    while(!isstream.eof()){
        string tempStr;
        isstream >> tempStr;
        resultados.push_back(stringToInt(tempStr));
    }

    return resultados;
}

int main(){
    int tam;
    cin>>tam;

    int cont=0;
    while(cont<tam){
        int N;
        cin>>N;

        char aux1[500];
        cin.ignore();
        cin.getline(aux1,500,'\n');
        char *ptr = aux1;
        string all_weeks = ptr;
        vector<int> resultados = vecWeeks(all_weeks);
        

        int M=0, J=0;
        for(int i=0; i<resultados.size(); i++){
            if(resultados[i]<30){
                M += 10;
                J += 15;
            }            
            else if(resultados[i]>=30 && resultados[i]<60){
                J += 15;
                M += (10*2);
            }
            else if(resultados[i]>=60){
                M += (resultados[i]/30)*10;
                J += (resultados[i]/60)*15;
                //para Mile
                if(30*(resultados[i]/30)<=resultados[i])
                    M+=10;
                //para Juice
                if(60*(resultados[i]/60)<=resultados[i])
                    J+=15;
            } 
        }
        if(M>J)
            cout<<"Case "<<cont+1<<": Juice "<<J<<endl;
        else if(M<J)
            cout<<"Case "<<cont+1<<": Mile "<<M<<endl;
        else cout<<"Case "<<cont+1<<": Mile Juice "<<M<<endl;

        cont++;
    }


    return 0;
}