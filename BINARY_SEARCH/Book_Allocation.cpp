#include <bits/stdc++.h>
using namespace std;


int countstudents(vector<int> vec,int n,int mid){

    int cntstudents=1;
    int pages=0;
    for (int i = 0; i < n; i++)
    {
       if (pages + vec[i] <= mid)
       {
            pages +=vec[i];
       }
       else
       {
        cntstudents++;
        pages =vec[i];

       }
       
    }
    return cntstudents;
    
}
int book_allocation(vector<int> vec,int n,int students){

    if (students > n )
    {
        return -1;
    }
    int low=*max_element(vec.begin(),vec.end());
    int high=accumulate(vec.begin(),vec.end(),0);
    while (low <=high)
    {
        int mid=(low + high) /2;
        int stud=countstudents(vec,n,mid);

        if (stud > students )
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }   
    return low; 
}


int main(){

    vector<int> vec={20,45,56,63,69,74,75,90};
    int n=vec.size();
    int m=5;
    int val=book_allocation(vec,n,m);
    cout<<val;

} 
