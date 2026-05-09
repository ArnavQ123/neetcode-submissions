class Solution {
public:
    bool bst(TreeNode* root, long long min, long long max){
        if(root == NULL)
            return true;

        if(root->val > min && root->val < max){
            bool left = bst(root->left, min, root->val);
            bool right = bst(root->right, root->val, max);
            return left && right;
        }
        else{
            return false;
        }
    }

    bool isValidBST(TreeNode* root) {
        return bst(root, LLONG_MIN, LLONG_MAX);
    }
};