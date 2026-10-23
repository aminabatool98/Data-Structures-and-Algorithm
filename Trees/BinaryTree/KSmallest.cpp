#include <bits/stdc++.h>
 using namespace std;

//   Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(NULL), right(NULL) {}
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    int preorder=0;
    int kthSmallest(TreeNode* root, int k) {

        if(root == NULL){
            return -1;
        }

        if(root->left != NULL){
           int lans= kthSmallest(root->left,k);
           if(lans != -1){
            return lans;
           }
        }

        if(preorder +1 ==k){
            return root->val;
        }

        preorder+=1;

        if(root->right != NULL){
            int rans=kthSmallest(root->right,k);
            if(rans != -1){
            return rans;
           }
        }
        return -1;
    }
};