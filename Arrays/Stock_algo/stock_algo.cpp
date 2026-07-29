#include <bits/stdc++.h>
using namespace std;

int SELL_BUY(vector<int>vec,int n){
    int maxPro=0;
    int mini=vec[0];
    for (int i = 0; i < n; i++)
    {
        int cost=vec[i] - mini;
        maxPro=max(cost,maxPro);
       mini =min(mini,vec[i]);
    }
    return maxPro;
}

int main(){
    vector<int> vec={1,2,8,2,3,4};
    cout<<SELL_BUY(vec,6);

}