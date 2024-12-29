/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    bool isBalanced(TreeNode *root) { return calculateHeight(root) != -1; }
    int calculateHeight(TreeNode *root)
    {
        if (!root)
            return 0;
        else
        {
            int leftHeight = calculateHeight(root->left);
            int rightHeight = calculateHeight(root->right);
            if (rightHeight == -1 || leftHeight == -1 ||
                abs(leftHeight - rightHeight) > 1)
                return -1;
            return 1 + max(leftHeight, rightHeight);
        }
    }
};