
//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
     bool identical(TreeNode* p, TreeNode* q) {
        if(p== nullptr || q== nullptr){
            return p== q;
        }
        return p->val == q->val 
        &&  identical(p->left,q->left ) 
        &&  identical(p->right,q->right );

      }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {

        if(root == nullptr || subroot == nullptr){
            return root == subroot;
        }

        if( root->val == subroot->val && identical(root,subroot) ) {
            return true;
        }

       return isSubtree(root->left,subroot)  || isSubtree(root->right, subroot);

        
    }
};

