#include <bits/stdc++.h>
using namespace std;

void Majority(vector<int>vec,int n){
    map<int,int>mpp;
    vector<int>ls;
    int mini=int (n/3) +1;
    for (int i = 0; i < n; i++)      
    {
        mpp[vec[i]]++;
        if (mpp[vec[i]] == mini){
            ls.push_back(vec[i]);
        }
        if (ls.size()==2)
        {
            
            break;
        }
    }
    sort(ls.begin(),ls.end());
}

//OPTIMAL APPROACH-----------------------------------------------------------------

class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int cnt1=0,cnt2=0, ele1=INT_MIN, ele2=INT_MIN;
        int n=arr.size();

        for(int i=0;i<n; i++){
            if(cnt1==0 && arr[i] != ele2){
                cnt1++;
                ele1=arr[i];
            }
            else if(cnt2==0 && arr[i] != ele1){
                cnt2++;
                ele2=arr[i];
            }
            else if(arr[i] == ele1){
                cnt1++;
            }
             else if(arr[i] == ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
            

        }

        vector<int>ls;
        cnt1=0,cnt2=0;
        for(int i=0;i<n; i++){
             if(ele1 == arr[i]){
                cnt1++;
            }
            if(ele2 == arr[i]){
                cnt2++;
            }
        }
        int mini =(int)( n/3) +1;
        if(cnt1 >= mini) {
            ls.push_back(ele1);
        }
        if(cnt2 >= mini) {
            ls.push_back(ele2);
        }
        
        return ls;
    }
};