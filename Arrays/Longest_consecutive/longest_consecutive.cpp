#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()== 0) return 0;
        int n=arr.size();
        int last_smallest=INT_MIN;
        int cnt=0;
        int longest=1;
        for(int i=0;i<n; i++){
            if(arr[i]-1 == last_smallest){
                cnt++;
                last_smallest=arr[i];
            }
            else if(arr[i] != last_smallest){
                cnt =1;
                last_smallest=arr[i];
            }
            longest=max(longest,cnt);
        }
    }
};