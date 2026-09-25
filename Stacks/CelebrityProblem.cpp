#include <bits/stdc++.h>
using namespace std;

int celebrity(int **mat, int n) {
    int top =0 ,down =n-1;
    while (top < down){
        if (mat[top][down]  == 1)
        {
            top++;
        }
        else if(mat[down][top] == 1){
            down--;
        }
        else{
            top++;
            down --;
        }


    }


    if ( top > down){
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (mat[top][i] == 00 && mat[i][top] == 1 && i != top)
        {
            continue;
        }
        else
        {
            return -1;
        }
    }
    return top;
    
}

int main() {
    
}