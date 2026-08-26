#include <bits/stdc++.h>
using namespace std;

void subsets(vector<int>&arr,vector<int>&ans,int i){
    if(arr.size() == i){
        for (int val: ans)
        {
            cout <<val;
        }
        cout <<endl;
    }
    return ;
    ans.push_back(arr[i]);
    subsets(arr,ans,i+1);
    arr.pop_back();
    subsets(arr,ans,i+1);


}


int main(){
    
} // namespace std;
