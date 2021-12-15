#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> mapp;
        vector<int> vec;
        int max;
        int l=0, r=k-1;
        for(int i=0; i<nums.size(); ++i){
            while(!mapp.empty() && mapp.top().second<=(i-k))
                mapp.pop();
            mapp.push(make_pair(nums[i],i));
            if(i>=k-1)
                vec.push_back(mapp.top().first);
        }
        
        return vec;
    }

int main(){
    vector<int> vec{1,3,-1,-3,5,3,6,7};
    int n = 3;
    vector<int> a = maxSlidingWindow(vec,n);
    cout<<"[";
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<",";
    cout<<endl;

}