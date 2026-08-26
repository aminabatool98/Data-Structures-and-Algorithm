#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool isvalid(vector<int> arr,int n, int painters,int maxAllocation){
        int pages=0; int students=1;
        for (int i = 0; i < n; i++)
    {

        if(pages + arr[i]<=maxAllocation){
            pages+=arr[i];

        }
        else{
            students++;
            pages=arr[i];
        }
    }
       return students > painters?false:true;
    }
    int splitArray(vector<int>& nums, int painters) {
        int n=nums.size();  int sum=0; int maxVal=INT_MIN;

        for(int i=0;i<n; i++){
            maxVal=max(maxVal,nums[i]);
            sum+=nums[i];
        }
        int st=maxVal; int end=sum;

        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(isvalid(nums,n, painters,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }

        return ans;
    }
};