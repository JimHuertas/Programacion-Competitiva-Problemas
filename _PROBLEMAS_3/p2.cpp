#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;


string analisisVagones(vector<int> vec, stack<int> A){
    stack<int> station;
    stack<int> B;
    for(int i=vec.size()-1; i>=0; i--)
        B.push(vec[i]);
    
    while(B.top() != A.top()){
        station.push(A.top());
        A.pop();
    }
    B.pop();
    A.pop();

    while(true){
        if(A.empty() && station.empty())
            break;

        if(!A.empty()){
            if(B.top() == A.top()){
                B.pop();
                A.pop();
            }
        }
        else if(!station.empty())
            if(B.top() != station.top())
                return "No";

        if(!station.empty()){
            if(B.top() == station.top()){
                B.pop();
                station.pop();
            }
        }
        else if(!station.empty())
            if(B.top() != A.top())
                return "No";
    }
    return "Yes";
}

int stringToInt(string txt){
    return stoi(txt);
}

vector<int> vecCoaches(string aux){
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
    int K; //nro de vagones
    while (true){
        stack<int> A; //A -> station -> B

        char aux1[500];
        vector<int> results;

        cin>>K;
        cin.ignore();
        if(K == 0)
            break;
        else{
            for(int i=K; i>0; i--)
                A.push(i);
            
            while(true){
                cin.getline(aux1,500,'\n');
                char *ptr = aux1;
                string input = ptr;

                if(input == "0"){
                    cout<<"\n";
                    break;
                }
                results = vecCoaches(input);
                cout<<analisisVagones(results, A)<<endl;
            }
        }
    }
    return 0;
}