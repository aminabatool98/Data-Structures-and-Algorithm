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

class Solution {
public:
    TreeNode* first = NULL;
    TreeNode* prev = NULL;
    TreeNode* second = NULL;

    void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        inorder(root->left);

        if (prev != NULL && prev->val > root->val) {

            if (first == NULL) {
                first = prev;
            }

            second = root;
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {

        inorder(root);

        if (first != NULL && second != NULL) {
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }
    }
};
