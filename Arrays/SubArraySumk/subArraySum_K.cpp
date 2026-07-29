#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute force---------------------------------------------------------------
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0;i<n;i++){
        // int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum +=nums[j];
        //         if(sum == k){
        //             cnt++;
        //         }
        // }
        // }
        // return cnt;

        //OPTIMAL APPROACH----------------
            int n=nums.size();
            int cnt=0;
            vector<int> PrefixS(n,0);
            for(int i=1;i<n;i++){
                PrefixS[i]=PrefixS[i-1]+PrefixS[i];
            }
            unordered_map<int,int>mp;
            for(int j=1;j<n;j++){
                if( PrefixS[j]==k){
                    cnt++;
                }
                int val=PrefixS[j]-k;
                if(mp.find(val) != mp.end()){
                    cnt+=mp[val];
                
                }
            }
    }
};


// MOST OPTIMAL SOLUTION-----------------------------------------------
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map<int,int> mpp;
        int cnt=0;
        int prefixSum=0;
        mpp[0]=1;
        int n=nums.size();

        for(int i=0;i<n;i++){
            prefixSum +=nums[i];
           int remaining= prefixSum-k;   
           cnt+= mpp[remaining];
            mpp[prefixSum] +=1;

        }

    return cnt;
   }
};
