#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low <= high){
            int mid=(low + high )/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(target > arr[mid]){
                low=mid+1;
            }
            else{
                high =mid-1;
            }
        }
        return -1;
    }
};
