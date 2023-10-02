#include "iostream"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

using namespace std;

class Solution {
public:
    int countDepth(TreeNode *current, int depth) {
        if (current == nullptr) return depth;
        return max(countDepth(current->left, depth),
                   countDepth(current->right, depth)) + 1;
    }

    int maxDepth(TreeNode *root) {
        return countDepth(root, 0);
    }
};