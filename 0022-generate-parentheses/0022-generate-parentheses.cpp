class Solution {
public:
    void solve(int left, int right, string &temp, vector<string> &ans)
{
    if (!left && !right)
    {
        ans.push_back(temp);
        return;
    }
    if (left > 0)
    {
        temp.push_back('(');
        solve(left - 1, right, temp, ans);
        temp.pop_back();
    }
    if (right > 0 && left < right)
    {
        temp.push_back(')');
        solve(left, right - 1, temp, ans);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string temp = "";
    solve(n, n, temp, ans);
    return ans;
}
};