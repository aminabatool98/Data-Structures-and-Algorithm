#include <bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(NULL), right(NULL) {}
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class BSTIterator {
    private:
    stack<TreeNode *>stk;
    void pushAll(TreeNode* root){
    while(root != NULL){
        stk.push(root);
        root=root->left;
    }
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
        
    }
    
    int next() {
        TreeNode * ptr=stk.top();
        stk.pop();
        pushAll(ptr->right);
        return ptr->val;
        
    }
    
    bool hasNext() {

        return !stk.empty();   
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */