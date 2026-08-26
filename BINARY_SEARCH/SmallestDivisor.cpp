#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
        int Find_divisor(vector<int>& arr, int mid){
            int sum=0;
            int n=arr.size();
            for(int i=0;i<n;i++){
                sum+=ceil((double)arr[i]/ (double)mid);
            }
            return sum;
        };
    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1,high=*max_element(arr.begin(), arr.end());
        int n=arr.size();
        while(low<=high){
            int mid=low + (high-low)/2;
            if(Find_divisor(arr,mid) <= threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};