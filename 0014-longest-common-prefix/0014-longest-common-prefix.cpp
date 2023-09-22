class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (!strs.size())
    {
        return "";
    }
    string ans = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0;
        int n = ans.length();
        while (j < n)
        {
            if (ans[j] != strs[i][j])
            {
                ans.erase(j);
                break;
            }
            j++;
        }
    }
    return ans;
    }
};