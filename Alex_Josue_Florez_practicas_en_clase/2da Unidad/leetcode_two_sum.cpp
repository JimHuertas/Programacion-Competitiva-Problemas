#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& sum, int target) {
        int i=-1;
        vector<int> result;   
        vector<pair<int,int>> vec;
        for(int k=0; k<sum.size(); k++){
            vec.push_back({sum[k],i+=1});
        }
        sort(vec.begin(), vec.end());
        int n = vec.size();
        i=0;
        int j=n-1;
        while(i<j){
            if(vec[i].first + vec[j].first > target)
                j--;
            else if(vec[i].first + vec[j].first < target)
                i++;
            else if(vec[i].first + vec[j].first == target){
                result.push_back(vec[i].second);
                result.push_back(vec[j].second);
                return result;
            } 
        }
        return result;
    
    }
};