/*
Diameter of tree means max left subtree height + right subtree height of any node
is the diameter of tree
*/

class Solution {
public:

    int findDia(TreeNode* node, int diameter)
    {
        // find left subtree height and right subtree height
        int lh = findDia(node->left, diameter);
        //find right subtree
        int rh = findDia(node->right, diameter);
        // once you have traversed the left and right subtree 
        diameter = max(diameter, lh+rh);
        // once traversed return the height 
        return 1+max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        // you can use the same approach as to when finding the lh and rh
        int (root == NULL) return 0;
        int diameter = 0;
        findDia(root, diameter);
        return diameter;
    }
};