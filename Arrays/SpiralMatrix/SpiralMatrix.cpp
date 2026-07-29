#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n_row = matrix.size();
        int m_col = matrix[0].size();

        int left = 0;
        int right = m_col - 1;
        int top = 0;
        int bottom = n_row - 1;

        vector<int> ans;

        while(left <= right && top <= bottom){

            // Left -> Right
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            // Top -> Bottom
            for(int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Right -> Left
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Bottom -> Top
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};