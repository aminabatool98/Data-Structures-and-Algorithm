#include <bits/stdc++.h>
using namespace std;


void Merge(int arr1[],int arr2[],int n,int m){
    int arr3[n+m];
    int left=0;
    int right=0;
    int index=0;
    while(left <n && right <m){
        if(arr1[left] <= arr2[right]){
            arr3[index]=arr1[left];
            index++;
            left++;
        }
        else{
            arr3[index]=arr1[right];
            index++;
            right++;
        }
    }
    while(left <n ){
        arr3[index]=arr1[left];
        index++;
        left++;
    }
    while(left <m ){
        arr3[index]=arr1[right];
        index++;
        right++;
    }
    for(int i=0;i<n+m;i++){
        if(i<n){
            arr1[i]=arr3[i];
        }
        else{
             arr2[i-n]=arr3[i];
        }
    }
}


// OPTIMAL APPROACH---------------------------Also on leetcode

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int left = m - 1;
        int right = 0;

        while (left >= 0 && right < n) {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());

        // Copy nums2 into the remaining positions of nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
