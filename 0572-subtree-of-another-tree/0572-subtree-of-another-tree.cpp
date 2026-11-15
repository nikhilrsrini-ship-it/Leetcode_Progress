
class Solution {
public:

    // Checks whether two trees are identical
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p == nullptr && q == nullptr)
            return true;

        if(p == nullptr || q == nullptr)
            return false;

        if(p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }

    // Searches for the subtree
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root == nullptr)
            return false;

        if(isSameTree(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||//This return statement here is to traverse each left and right child and implement
               isSubtree(root->right, subRoot); //isSUbtree function
    }                                          
};
