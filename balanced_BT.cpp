class Solution {
public:

    int check(TreeNode* root)
    {
        if(root == NULL) return -1;

        int left = check(root->left);
        if(left == -1) return -1;
        int right = check(root->right);
        if(right == -1) return -1;
        if(abs(left - right) > 1) return -1;

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(check(root)) return true;
        else return false;
    }
};