#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(vector<int>& nums, int start,
               vector<int>& ans,
               vector<vector<int>>& result) {

        // Every current ans is a valid subset
        result.push_back(ans);

        for(int i = start; i < nums.size(); i++) {

            // Skip duplicate elements at the same level
            if(i > start && nums[i] == nums[i - 1]) {
                continue;
            }

            // Take
            ans.push_back(nums[i]);

            solve(nums, i + 1, ans, result);

            // Backtrack
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> ans;

        // Very important
        sort(nums.begin(), nums.end());

        solve(nums, 0, ans, result);

        return result;
    }
};
