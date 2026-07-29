#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& mtx) {
        int n=mtx.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mtx[i][j],mtx[j][i]);
        }
        }
        for(int i=0;i<n;i++){
        reverse(mtx[i].begin(),mtx[i].end());
        }
    }
};