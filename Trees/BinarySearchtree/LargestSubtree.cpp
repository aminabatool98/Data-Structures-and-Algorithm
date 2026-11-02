#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
    int data;
    Node *left;
    Node *right;
};


class Info {
    public:
    int size;
    int max;
    int min;
    
    Info(int size,int max,int min){
        this->size=size;
        this->max=max;
        this->min=min;
    }
};

Info helper(Node *root){
    if(root == NULL){

        return Info(0,INT_MIN,INT_MAX);
    }
    Info left=helper(root->left);
    Info right=helper(root->right);

    if(root->data > left.max && root->data < right.min){
        
        return Info(left.size + right.size + 1, max(root->data,right.max), min(root->data,left.min));
    }
    return Info(0,INT_MIN,INT_MAX);
}


int largestBSTsz(Node *root){
    if(root == NULL){
        return 0;
    }
    Info ans=helper(root);
    return ans.size;
}

int main(){

}