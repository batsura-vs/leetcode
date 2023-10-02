#include "iostream"

using namespace std;

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
    int countDepth(TreeNode *node) {
        if (node == nullptr) return 0;
        int left = countDepth(node->left);
        int right = countDepth(node->right);
        if (abs(left - right) > 1 || left == -1 || right == -1) return -1;
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode *root) {
        return countDepth(root) != -1;
    }
};