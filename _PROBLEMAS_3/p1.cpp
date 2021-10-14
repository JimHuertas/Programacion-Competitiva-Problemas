#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int stringToInt(string txt){
    return stoi(txt);
}

vector<int> eliminarMenor( vector<vector<int>> &vec){
    vector<int> vec_menor = vec[0];
    int size=0;
    for(int i=1; i<vec.size(); i++)
        if(vec_menor[0]>vec[i][0]){
            vec_menor = vec[i];
            size = i;
        }
        else if(vec[i][0] == vec_menor[0]){   
            if(vec[i][1] < vec_menor[1]){
                vec_menor = vec[i];
                size = i;
            }
        }
    vec_menor = vec[size];
    vec.erase(vec.begin()+size);

    return vec_menor;
}

int main(){
    int K;
    vector<vector<int>> vec_register;
    char aux1[500];
    int cont=1;
    while(true){
        cin.getline(aux1,500,'\n');
        char *ptr = aux1;
        string input = ptr;
        if(input == "#")
            break;

        //para separar la palabra por tokens
        vector<int> results(3);

        string delimiter = " ";
        size_t pos = 0;
        string token;
        while ((pos = input.find(delimiter)) != string::npos) {
            token = input.substr(0, pos);
            if(token != "Register")
                results[1]=stringToInt(token);
            input.erase(0, pos + delimiter.length());
        }
        results[0] = stringToInt(input);
        results[2] = results[0];
        vec_register.push_back(results);
    }

    cin>>K;

    for(int i=0; i<K; i++){
        vector<int> lines = eliminarMenor(vec_register);
        cout<<lines[1]<<endl;
        vector<int> next_line;
        next_line.push_back(lines[0]+lines[2]);
        next_line.push_back(lines[1]);
        next_line.push_back(lines[2]);
        vec_register.push_back(next_line);
    }


    return 0;
}