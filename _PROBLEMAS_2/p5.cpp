#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string intToString(int num){
    stringstream ss;
    ss << num; 
    string str = ss.str();
    return str;
}

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
    int people, presup, hoteles, weeks; 
    int price;
    int total=0;


    while(cin>>people>>presup>>hoteles>>weeks){
        vector<int> presp;
        vector<int> state;
        
        string this_week="";
        
        int cont=0;
        while(cont<hoteles){
            int status=1;
            cin>>price;
            total = price*people;

            cin.ignore();
            char aux1[30];
            cin.getline(aux1,30,'\n');
            char *ptr = aux1;
            string all_weeks = ptr;
            vector<int> resultados = vecWeeks(all_weeks);


            for(int i=0; i<weeks; i++)
                if(resultados[i]<people)
                    status = 0;    
            
            presp.push_back(total);
            state.push_back(status);
            cont++;
        }

        string result="Stay Home";
        for(int i=0; i<presp.size(); i++)
            if(presp[i]<presup && state[i]==1)
                result = intToString(presp[i]);
        
        cout<<result<<endl;
    }
    

    return 0;
}