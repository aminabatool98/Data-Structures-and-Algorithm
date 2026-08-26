#include <bits/stdc++.h>
using namespace std;

int placingCows(vector<int>vec,int distance,int cows){
    int cntCows=1,lastCow=vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] - lastCow >= distance)
        {
           cntCows++;
           lastCow=vec[i];
        }
        if (cntCows >= cows ) return true;   
    }
    return false;   
}


int aggressive_Cow(vector<int>vec,int n,int cows){
    int low=1,high=vec[n-1]-vec[0];
    while (low<=high)
    {
        int mid=(low + high)/2;
        if (placingCows(vec,mid,cows) == true)
        {
           low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return high;
    
}


int main(){
    vector<int>vec={1,2,3,4,5,6,7,8};
    int n=vec.size();
    int cows=4;
    aggressive_Cow(vec, n,cows);

}