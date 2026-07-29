#include <bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>arr,int n){
    int maximum=0;
    vector<int>ans;
    for (int i = n-1; i >=0; i--)
    {
        if (arr[i] > maximum)
        {
            maximum=arr[i];
            ans.push_back(arr[i]);
        }
    }
    return ans;

    
}
int main(){
    vector<int>vec={2,1,8,2,4};
    auto ans=Leaders(vec,5);
    for (auto i : ans)
    {
        cout<<i;
    }
    
}