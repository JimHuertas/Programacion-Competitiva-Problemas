#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x;
    int num;
    int i=0;

    cin>>n>>x;
    int tam = n;
    vector<pair<int,int>> vec;
    while(tam--){
        cin>>num;
        vec.push_back({num, i+=1});
    }
    sort(vec.begin(), vec.end());

    i=0;
    int j=n-1;
    while(i<j){
        if(vec[i].first + vec[j].first > x)
            j--;
        else if(vec[i].first + vec[j].first < x)
            i++;
        else if(vec[i].first + vec[j].first == x){
            cout<<vec[j].second << " "<<vec[i].second<<endl;
            return 0;
        } 
    }
    
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}