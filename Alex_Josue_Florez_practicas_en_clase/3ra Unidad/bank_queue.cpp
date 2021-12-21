#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


// compares the Person by their money.
bool compareMoney(const int &a, const int &b){
    return a >= b;
}

// put the person into the queue, 
// if the person's spot and all spots below him are occupied,
// stop the loop, cannot serve him.
void queuePerson(vector<int> &v, Person c){
    int i = c.time;
    
    while(i >= 0){
        if(v[i] == 0){
            v[i] = c.money;
            return;
        }  
        i--; //loop stops after no more person in queue
    }
}


int main(){
    int N,T;
    cin>>N>>T;
    set<pair<int,int long>> input;
    while(N--){
        int ci;
        int long ti;
        cin>>ci>>ti;
        cout<<N<<"  "<<ci<<"  "<<ti<<endl;
        input.insert(pair<int,int long>(ci,ti));
    }

    set<pair<int,int long>>::iterator it;
    int long long resultado=0;
    int time=0;
    it = input.end();
    while(it != input.begin()){
        it--;
        if(time+it->second <= T){
            time += it->second;
            resultado += it->first;
            cout<<time<<"   "<<resultado<<endl;
        }
        else break;
    }

    cout<<resultado<<endl;

    return 0;
}
