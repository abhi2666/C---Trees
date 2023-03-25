/*
Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.
*/

class Solution {
public:

    int getPathSum(TreeNode* root , int &sum)
    {
        if(root == NULL) return 0;

        //from currrent node...find left and right sum
        // take the left and right sum only if its not negative else replace it
        // with zero
        int leftSum = max(0, max(root->left, sum));
        int rightSum = max(0, max(root->right, sum));
        // update the sum value if you got something new and greater than previous
        sum = max(sum, (root->val + leftSum + rightSum));

        // at last from every node return its value + leftsum + rightsum to previous node
        return (root->val+max(leftsum, rightSum));
    }


    int maxPathSum(TreeNode* root) {
        int sum = 0;
        getPathSum(root, sum);
        return sum;
    }
};