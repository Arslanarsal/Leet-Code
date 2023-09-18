class Solution {
public:
    string removeOuterParentheses(string s) {
            string ans = "";
    int open = 0;
    for (auto i : s)
    {
        if (i == '(' && open++ > 0)
        {
            ans += i;
        }
        if (i == ')' && open-- > 1)
        {
            ans += i;
        }
    }
    return ans;
    }
};