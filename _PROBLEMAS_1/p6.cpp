#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int menor(vector<int>vec){
    int max = vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i]<max)
            max = vec[i];
    }

    return max;
}
int mayor(vector<int> vec){
    int max = vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i]>max)
            max = vec[i];
    }
    return max;
}

int stringToInt(string txt){
    return stoi(txt);
}

int main(){
    int tam, nro_tiendas;
    cin>>tam;
    int cont=0;

    char txt[50];
    string aux;

    while(cont<tam){
        cin>>nro_tiendas;
        vector<int> tiendas;
        cin.ignore();

        //ingresar tiendas
        cin.getline(txt, 100, '\n');
        char *ptr = txt;
        aux = ptr;

        istringstream isstream(aux);
        while(!isstream.eof()){
            string tempStr;
            isstream >> tempStr;
            tiendas.push_back(stringToInt(tempStr));
        }

        int max = mayor(tiendas);
        int minus = menor(tiendas);


        int menor_resultado=1000000;
        int suma;
        for(int i=minus; i<=max; i++){
            suma = ((i-minus)*2) + ((max-i)*2);
            if(menor_resultado > suma)
                menor_resultado = suma;
        }
        
        cout<<menor_resultado<<endl;
        
        cont++;
    }


    return 0;

}