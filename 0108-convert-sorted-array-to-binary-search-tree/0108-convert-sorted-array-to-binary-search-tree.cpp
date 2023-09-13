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
public:

  TreeNode *built(vector<int> &nums, int min, int max)
{
    if (min > max)
    {
        return NULL;
    }
    int mid = (min + max) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = built(nums, min, mid - 1);
    root->right = built(nums, mid + 1, max);
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
          return built(nums, 0, nums.size()-1);
    }
};