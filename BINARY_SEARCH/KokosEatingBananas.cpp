#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
            int maxFind(vector<int>& v){
            int ans=INT_MIN;
            int n=v.size();
            for(int i=0;i<n; i++){
               ans= max(v[i],ans);
            }
            return ans;
        }
        long long Cal_Bananas(vector<int>& v,int mid){
            int n=v.size();
            long long totalH =0;
            for(int i=0;i<n; i++){
             totalH += ceil((double) v[i] /(double) mid);
            }
            return totalH;
        }

    int minEatingSpeed(vector<int>& n, int h) {
        int low=1,high=maxFind(n);
        while(low<=high){
            int mid=low + (high-low)/2;
           long long N_bananas= Cal_Bananas(n,mid);

           if(N_bananas <= h){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        return low;
    }
};