#include "iostream"
#include "vector"

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int middle = nums.size() / 2;
        TreeNode *node = new TreeNode(nums[middle]);
        TreeNode *root = node;
        for (int i = middle - 1; i >= 0; i--) {
            node->left = new TreeNode(nums[i]);
            node = node->left;
        }
        node = root;
        for (int i = middle + 1; i < nums.size(); i++) {
            node->right = new TreeNode(nums[i]);
            node = node->right;
        }
        return root;
    }
};