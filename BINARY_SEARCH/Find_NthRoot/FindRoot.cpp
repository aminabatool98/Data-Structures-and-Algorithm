#include <bits/stdc++.h>
using namespace std;


int funct(int mid,int n,int m){
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        ans=mid*ans;
        if (ans > m)
        {
            return 2;
        }
        else if(ans == m)
        {
            return 1;
        }
        else{
            return 0;
        } 
    }
}


int Find_root(int n,int m){
    int low =1,  high=m;
    while (low <= high){
        int mid=(low + high)/2;
       int val= funct(mid,n,m);

        if (val == 1)
        {
           return mid;
        }
        else if(val == 0)
        {
           low= mid+1;
        }
        else
        {
            high=mid-1;
        }
        
        
        
    }
    return -1;
    
}

int main(){

    Find_root(4,81);
}