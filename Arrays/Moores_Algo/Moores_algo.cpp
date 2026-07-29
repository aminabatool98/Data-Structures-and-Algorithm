#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int ele=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(cnt == 0){
                ele=nums[i];
                cnt=1;
            }
            else if(ele == nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        int countt=0;
        for(int i=0;i<n;i++){
            if(ele == nums[i] ) {
                cnt++;
            }
        }
        if(cnt > n/2 ) {
                return ele;
            }

    return -1;
    }
};