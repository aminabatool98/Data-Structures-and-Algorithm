#include <bits/stdc++.h>
using namespace std;
int subArray(vector<int>a,int k){
    int n=a.size();
    int xr=0;
    map<int,int>mpp;
    int cnt=0;
    mpp[xr]++;
    for (int i = 0; i < n; i++)
    {
        xr=xr^a[i];
        int x=xr^k;
        cnt +=mpp[x];
    }   
}
int main(){
    vector<int>arr={2,3,1,4,7,5,0};
    int k=7;
    subArray(arr,k);

}
