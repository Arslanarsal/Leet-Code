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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>> ans;
    if (!root)
    {
        return ans;
    }

    stack<TreeNode *> st1, st2;
    st1.push(root);
    vector<int> temp;
    TreeNode *n;

    temp.push_back(root->val);
    while (!st1.empty() || !st2.empty())
    {
        ans.push_back(temp);
        temp.clear();

        while (!st1.empty())
        {
            n = st1.top();
            st1.pop();

            if (n->right)
            {
                st2.push(n->right);
                temp.push_back(n->right->val);
            }
            if (n->left)
            {
                st2.push(n->left);
                temp.push_back(n->left->val);
            }
        }
        if (!temp.empty())
        {
            ans.push_back(temp);
            temp.clear();
        }

        while (!st2.empty())
        {
            n = st2.top();
            st2.pop();

            if (n->left)
            {
                st1.push(n->left);
                temp.push_back(n->left->val);
            }

            if (n->right)
            {
                st1.push(n->right);
                temp.push_back(n->right->val);
            }
        }
    }

    if (!temp.empty())
    {
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
    }
};