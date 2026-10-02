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

int main(){

    vector<int> vec={1,2,-1,-1,9,3,5,8,-1,-1};
    Node *root=BuildTree(vec);
    cout<<root;


}