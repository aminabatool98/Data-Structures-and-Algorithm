#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans(n,-1); 
       stack<int> stk; 
       for(int i=2*n-1 ; i>=0; i--){

       
        while(stk.size() >0 && nums[stk.top()] <= nums[i%n]){
            stk.pop();
        }

        ans[i%n]=stk.empty() ?-1 :nums[stk.top()];
        stk.push(i%n);
       }
       return ans;
    }
};