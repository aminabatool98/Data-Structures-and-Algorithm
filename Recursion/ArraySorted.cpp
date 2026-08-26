#include <bits/stdc++.h>
using namespace std;

bool recurssion(int n,vector<int> vec){

    if( n== 1 || n==0 ){
        return true;
    }
    return vec[n-1] >= vec[n-2] && recurssion(n-1,vec);

}


int main(){
    vector<int> vec={1,2,3,4,5,7};
    recurssion(4,vec);
}