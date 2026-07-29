#include <bits/stdc++.h>
using namespace std;

void majority_element(vector<int> arr,int n){
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    };
    for (auto it :mp)
    {
        if (it.second >n/2)
        {
           cout<< it.first;
        }
        
    }
    
    
 }

int main(){
    vector<int> vec={2,2,3,0,2,2};
    majority_element(vec,6);
}