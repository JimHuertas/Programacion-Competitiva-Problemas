#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
string longestCommonPrefix(vector<string> ar, int n){
    if (n == 0)
        return "";
    if (n == 1)
        return ar[0];

    sort(ar.begin(), ar.end());
    int en = min(ar[0].size(), ar[n - 1].size());

    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < en && first[i] == last[i])
        i++;
 
    string pre = first.substr(0, i);
    return pre;
}


int main(){
    vector<string> ar = {"geeksforgeeks", "geeks", "geek", "geezer"};
    
    cout << "The longest common prefix is: "<< longestCommonPrefix(ar, ar.size());
    return 0;
}
 