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
    bool isSame(TreeNode *nodeA, TreeNode *nodeB) {
        if (nodeA == nullptr && nodeB != nullptr
            || nodeB == nullptr && nodeA != nullptr)
            return false;
        if (nodeB == nullptr) return true;
        if (nodeA->val != nodeB->val) return false;
        return isSame(nodeA->left, nodeB->left) && isSame(nodeA->right, nodeB->right);
    }

    bool isSameTree(TreeNode *p, TreeNode *q) {
        return isSame(p, q);
    }
};