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
    vector<vector<int>> levelOrder(TreeNode* root) {
            vector<int> temp;
    vector<vector<int>> ans;

    if (root == NULL)
    {
        return ans;
    }

    queue<TreeNode *> Qu;
    Qu.push(root);

    while (!Qu.empty())
    {
        Qu.push(NULL);
        while (Qu.front())
        {
            TreeNode *n = Qu.front();
            Qu.pop();
            temp.push_back(n->val);
            if (n->left)
            {
                Qu.push(n->left);
            }
            if (n->right)
            {
                Qu.push(n->right);
            }
        }
        ans.push_back(temp);
        temp.clear();
        Qu.pop();
    }
    return ans;
    }
};