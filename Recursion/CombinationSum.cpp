#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    set<vector<int>>s;
    void Helper(vector<int>& arr,int idx, int target,vector<int>& ans,vector<vector<int>>& com){
    if(idx == arr.size() || target < 0){
        return;
    }
    if(target == 0){
        if(s.find(ans) == s.end()){
        com.push_back(ans);
        s.insert(ans);
        }
        return;

    }
    ans.push_back(arr[idx]);
    Helper(arr,idx+1,target-arr[idx],ans,com); //single
    Helper(arr,idx,target-arr[idx],ans,com); //single
    ans.pop_back();
    Helper(arr,idx+1,target,ans,com); //exclude

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>ans;
        vector<vector<int>>com;
        Helper(arr,0,target,ans,com);
        return com;
   
    }
};