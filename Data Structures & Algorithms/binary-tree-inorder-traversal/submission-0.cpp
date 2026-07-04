/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> ans;

   public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root != nullptr && root->left != nullptr) {
            inorderTraversal(root->left);
        }
        if (root != nullptr) {
            ans.push_back(root->val);
        }
        if (root != nullptr && root->right != nullptr) {
            inorderTraversal(root->right);
        }
        return ans;
    }
};