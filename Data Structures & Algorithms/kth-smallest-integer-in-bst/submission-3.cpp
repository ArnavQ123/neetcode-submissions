/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int po=0;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }
        if(root->left!=NULL){
            int la=kthSmallest(root->left,k);
            if(la!=-1){
                return la;
            }
        }
        if(po+1==k){
            return root->val;
        }
        po=po+1;
        if(root->right!=NULL){
            int ra=kthSmallest(root->right,k);
            if(ra!=-1){
                return ra;
            }
        }
        return -1;

    }
};
