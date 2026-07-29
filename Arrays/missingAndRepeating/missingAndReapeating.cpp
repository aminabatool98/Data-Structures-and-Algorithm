#include <bits/stdc++.h>
using namespace std;

// Brute Force------------------------------------------------------------------
void miss_repeat(vector<int> &arr,int n){
    
    int hasharr[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        hasharr[arr[i]]++;
    }
    int repeat=-1,missing=-1;
    for (int j = 0; j < n; j++)
    {
        if (hasharr[j] ==2)
        {
            repeat=hasharr[j];
        }
        else if (hasharr[j] ==0)
        {
            missing=hasharr[j];
        }
        
    }
    
}

// OPTIMAL APPROACH----------------------------------------


vector<int> miss_repeat_Optimal(vector<int> &arr,int n){
    
    long long S=0,SN=(n*(n+1))/2;
    long long S2=0,SN2=(n*(n+1)*(2*n+1))/6;
    for (int i = 0; i < n; i++)
    {
       S+=arr[i];
       S2 +=(long long)arr[i] *(long long)arr[i];

    }
    int repeat=-1,missing=-1;
    long long val1= S-SN;
    long long val2= S2-SN2;
    val2=val2/val1;
    
    long long x=(val1 +val2)/2;
    long long y=x-val1;
    return {int(x),int(y)};
}



int main(){
    vector<int>arr={1,1,2,3,4,6,7};
    int n=7;
    miss_repeat_Optimal(arr,n);

}