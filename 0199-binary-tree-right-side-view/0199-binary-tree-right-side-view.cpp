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
    vector<int> rightSideView(TreeNode* root) {
            vector<int> temp;

    if (root == NULL)
    {
        return temp;
    }

    queue<TreeNode *> Qu;
    Qu.push(root);

    while (!Qu.empty())
    {
        temp.push_back(Qu.front()->val);
        Qu.push(NULL);

        while (Qu.front())
        {
            TreeNode *n = Qu.front();
            Qu.pop();
            if (n->right)
            {
                Qu.push(n->right);
            }
            if (n->left)
            {
                Qu.push(n->left);
            }
        }
        Qu.pop();
    }
    return temp;
    }
};