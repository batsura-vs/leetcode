#include "vector"
#include "iostream"
#include "queue"

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
    vector<int> res;

    void inorder(TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        this->res.push_back(node->val);
        inorder(node->right);
    }

    vector<int> inorderTraversal(TreeNode *root) {
        inorder(root);
        return this->res;
    }
};