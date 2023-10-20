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
    void verticalTraversal(TreeNode *root, int idx, map<int, map<int, vector<int>>> &mp, int id)
{
    if (!root)
    {
        return;
    }
    mp[idx][id].push_back(root->val);
    if (root->left)
    {
        verticalTraversal(root->left, idx - 1, mp, id + 1);
    }
    if (root->right)
    {
        verticalTraversal(root->right, idx + 1, mp, id + 1);
    }
}
vector<vector<int>> verticalTraversal(TreeNode *root)
{
    map<int, map<int, vector<int>>> mp;
    verticalTraversal(root, 0, mp, 0);
    vector<vector<int>> ans;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        map<int, vector<int>> inner_map = it->second;
        vector<int> temp;
        for (auto inner_it = inner_map.begin(); inner_it != inner_map.end(); inner_it++)
        {
            vector<int> inner_vec = inner_it->second;
            sort(inner_vec.begin(), inner_vec.end());

            for (auto &&i : inner_vec)
            {
                temp.push_back(i);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}
};