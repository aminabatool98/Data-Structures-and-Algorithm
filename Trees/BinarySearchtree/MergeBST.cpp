#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;    

    Node(int val){
        data=val;
        left=right=NULL;
    }
};


Node* inorder(Node *root, vector<int> &arr){
    if(root == NULL){
        return NULL;
    }
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}


Node * BuildBst(vector<int> arr,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    Node *root=new Node(arr[mid]);
    root->left=BuildBst(arr,s,mid-1);
    root->right=BuildBst(arr,mid+1,e);
    return root;
}

Node * MergeBST(Node* root1,Node* root2){
    vector<int> arr1,arr2;
    inorder(root1,arr1);
    inorder(root2,arr2);

    int i=0,j=0;
    vector<int> temp;
    while (i<arr1.size() && j<arr2.size())
    {
    if(arr1[i] < arr2[j]){
        temp.push_back(arr1[i++]);
    }
    else{
        temp.push_back(arr2[j++]);
    }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i++]);
    }

    while(j<arr2.size()){
        temp.push_back(arr2[j++]);
    }   
    


}

int main(){
Node *root1=    BuildBst({1,2,3,4,5},0,4);
Node *root2=    BuildBst({6,7,8,9,10},0,4);

Node *mergedRoot = MergeBST(root1,root2);



}