#include <bits/stdc++.h>
using namespace std;

int find_sqrt(vector <int> &arr){
    int n=arr.size();
    int low =0,high=n;

    while (low <= high)
    {
        long long mid=(low +high) /2;
        long long val= (mid * mid);
        if (val <=n)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
vector <int> arr={3,4,5,1,2,3,6};
find_sqrt(arr);
    
}