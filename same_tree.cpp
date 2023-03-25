/*
You have to check if two trees are equal or not.
Approach --> This can be easily done by traversing both the trees and comparing the nodes
at the exact time and if any moment they gives false..return false 
*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL) return (p == q);

        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};