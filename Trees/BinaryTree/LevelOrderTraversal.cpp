#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int root;
    Node * left;
    Node * right;
    Node(int val){
        root=val;
        left=right=NULL;
    }
};


static int idx=-1;
Node* BuildTree(vector<int> pre){
    idx++;
    if (pre[idx] == -1)
    {
       return NULL;
    }
    
   Node* root=new Node(pre[idx]);
   root->left=BuildTree(pre);
   root->right=BuildTree(pre);
   return root;

}

void LevelOrder(Node *root){
    queue<Node*> q;
    q.push(root);

    while (q.size() > 0)
    {
        Node *curr=q.front();
        q.pop();
        cout<<curr->root;
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
        
        
    }
    

}

int height(Node *root){
    if (root ==NULL)
    {
        return 0;
    }
    
    int Lhgt=height(root->left);
    int Rhgt=height(root->right);
    return Lhgt+Rhgt+(root->root);
}

int main(){

    vector<int> vec= {1, 2, -1, -1, 9, 3, -1, -1, 5, 8, -1, -1, -1};
    Node *root=BuildTree(vec);
    // LevelOrder(root);
    int roo=height(root);
    cout<<roo;


}