#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void permute_seq(vector<int>& nums,int idx,  vector<vector<int>>& ans) {
        if(nums.size() == idx){
            ans.push_back({nums});
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx], nums[i]);
             permute_seq( nums,idx+1,ans);
            swap(nums[idx], nums[i]);
        }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute_seq(nums,0,ans);
        return ans;
      
    }
}; 