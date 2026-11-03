#include <iostream>
using namespace std;



class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


TreeNode* inorderSuccessor(TreeNode* root, TreeNode* node) {
    TreeNode* successor = NULL;
    while (root != NULL) {
        if (root->data > node->data) {
            successor = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return successor;
}