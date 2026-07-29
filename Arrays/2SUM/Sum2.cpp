#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
        int remaining=target-nums[i];
        if(mpp.find(remaining) != mpp.end()){
            return {mpp[remaining],i };
        }
        mpp[nums[i]] =i;
        }
        return {-1,-1};  
}   };

// USING 2 POINTER---its an optimal approach but not be submitted on leetcode
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         sort(nums.begin(), nums.end());

//         int left = 0;
//         int right = nums.size() - 1;

//         while (left < right) {

//             int sum = nums[left] + nums[right];

//             if (sum == target) {
//                 return {left, right};
//             }
//             else if (sum < target) {
//                 left++;
//             }
//             else {
//                 right--;
//             }
//         }

//         return {-1, -1};
//     }
// };