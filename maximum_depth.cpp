/*
simply you just have to give the height of the binary tree.
This can be easily be done by using recursive approach..

Approach --> find the height of left subtree and right subtree and just return 
the max of both
*/


class Solution {
public:
    int maxDepth(TreeNode* root) {
        // base case
        if(root == NULL) return 0;

        // check left subtree
        int left = maxDepth(root->left);
        // check right subtree
        int right = maxDepth(root->right);
        // now return the max height you can get
        return 1 + max(left, right); // 1 is added here because it represent current level
                                     // and without doubt we have to add it

    }
};