/*
Given the root of a binary tree and an integer targetSum, return true 
if the tree has a root-to-leaf path such that adding up all the values 
along the path equals targetSum.
A leaf is a node with no children.


Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
*/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        //while checking if you got the target sum...remeber to check if its leaf node or not
        //even if you get the target sum remember if its not leaf node then its all waste

        if(root == NULL) return 0;
        else if(root == targetSum && root->left == NULL && root->right == NULL) return true;
        else {
            // tarverse the tree in left and right and remember to pass the updated target sum
            // as you move from one node to other
            return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
        }
    }
};