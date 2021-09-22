#include <iostream>
#include <vector>
using namespace std;


int main(){
    int people, presup, hoteles, weeks; 
    int price;
    int total=0;
    vector<int> presp;
    vector<bool> state;


    while(cin>>people>>presup>>hoteles>>weeks){
        bool status=true;
        int this_week=0;
        
        int cont=0;
        while(cont<hoteles){
            
            cin>>price;
            total = price*people;
            for(int i=0; i<weeks; i++){
                cin>>this_week;
                if(this_week<people)
                    status = false;
            }
            presp.push_back(total);
            state.push_back(status);
            cont++;
        }
    }
    
    for(int i=0; i<presp.size(); i++)
        if(presp[i]<presup && state[i])
            cout<<presp[i]<<endl;
        else
            cout<<"Stay Home"<<endl;
}