#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void allSubset(vector<int>& nums, vector<int>& ans, int i,
                   vector<vector<int>>& result) {

        // Base case
        if (i == nums.size()) {
            result.push_back(ans);
            return;
        }

        // Choice 1: Include nums[i]
        ans.push_back(nums[i]);
        allSubset(nums, ans, i + 1, result);

        // Backtrack
        ans.pop_back();

        // Choice 2: Exclude nums[i]
        allSubset(nums, ans, i + 1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;

        allSubset(nums, ans, 0, result);

        return result;
    }
};