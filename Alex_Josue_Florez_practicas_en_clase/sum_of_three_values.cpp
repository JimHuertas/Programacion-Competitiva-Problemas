#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pos_max(vector<pair<int,int>> &vec, int i, int j, int k){
    int pos_aux = (vec[i].first < vec[j].first) ? j : i;
    int vec_aux = vec[pos_aux].first;
    return (vec_aux < vec[k].first) ? k : pos_aux;
}

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
    while(i < n){
		int j = 0; 
        int k = n-1;
		while(j != k){
			int target; target = x - vec.at(i).first;
			if(j != i && k != i && vec.at(j).first + vec.at(k).first == target){
				cout << vec.at(j).second << " " << vec.at(k).second
					 << " " << vec.at(i).second << endl;
				return 0;
			}
			if(vec.at(j).first + vec.at(k).first < target)
				j++;
			else
				k--;
		}
        i++;
	}
    
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}