#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int root;
        Node *left;
        Node *right;
        Node(int val){
            root=val;
            left=right=NULL;
        }

};

static int idx=-1;
Node* BuildTree(vector<int> pre){
    idx++;
    if (idx == -1)
    {
       return NULL;
    }
    
   Node* root=new Node(pre[idx]);
   root->left=BuildTree(pre);
   root->right=BuildTree(pre);
   return root;

}

void KthLevel(Node *root,int k){

    if(root==NULL){
        return;
    }

    if(k==1){
        cout<<root->root<<" ";
        return;
    }

    KthLevel(root->left,k-1);
    KthLevel(root->right,k-1);

}

int main(){

    vector<int> vec={1,2,-1,-1,9,3,5,8,-1,-1};
    Node *root=BuildTree(vec);
    KthLevel(root,3);
    cout<<root;


}

