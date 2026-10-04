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


void TopView(Node *root){

    queue<pair<Node*,int>> q;
    map<int,int>mp;
    q.push({root,0});

    while (q.size() > 0)
    {
        Node *curr=q.front().first;
        int HD=q.front().second;
        q.pop();

        if(mp.find(HD) ==mp.end()){
            mp[HD]=curr->root;
        }

        if(curr->left!=NULL){
            q.push({curr->left,HD-1});
        }

        if(curr->right!=NULL){
            q.push({curr->right,HD+1});
        }
    }
    

}

int main(){

    vector<int> vec={1,2,-1,-1,9,3,5,8,-1,-1};
    Node *root=BuildTree(vec);
    cout<<root;


}