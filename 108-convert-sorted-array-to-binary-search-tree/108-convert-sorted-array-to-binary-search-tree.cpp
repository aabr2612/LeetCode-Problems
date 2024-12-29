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
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        return buildBST(nums, low, high);
    }
    TreeNode *buildBST(vector<int> &nums, int low, int high)
    {
        if (low > high)
            return nullptr;
        int mid = low + (high - low) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = buildBST(nums, low, mid - 1);
        root->right = buildBST(nums, mid + 1, high);
        return root;
    }
};