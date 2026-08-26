#include <bits/stdc++.h>
using namespace std;

// OPTIMAL SOLUTION
class Solution {
public:
    int searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int count=-1;
        int low=0, high=n-1, first=-1,last=-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(arr[mid] ==target ){
                first =mid;
                high=mid-1;
            }
            else if(arr[mid] < target ){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        } 
        low=0,high=n-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(arr[mid] ==target ){
                last =mid;
                low=mid+1;
            }
            else if(arr[mid] < target ){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        } 
        if(first == -1) return -1;
        else{
            return count;
        }
    }
};

