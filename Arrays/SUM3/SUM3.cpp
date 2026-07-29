#include <bits/stdc++.h>
using namespace std;

vector<int> Sum3(vector<int> vec,int n){
    set<vector<int>>st;
    for (int i = 0; i < n; i++)
    {
        set<int>hashset;
       for (int j = i+1; i < n; i++)
       {
                    int third= -(vec[i] + vec[j]);
                    if (hashset.find(third) != hashset.end())
                    {
                       vector<int> temp={vec[i],vec[j],third};
                       sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(vec[j]);
       }  
    }  
}
//OPTIMAL APPROACH---------------------------------------------------------

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for (int i = 0; i < n; i++)
       {
        int j=i+1,k=n-1;

        if (i > 0 && nums[i] == nums[i - 1])
                continue;

        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while (j<k && nums[j] == nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
            }
        }
       }
       return ans;
    }
};


int main(){

}