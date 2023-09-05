class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;

    int len = s.length();

    int ans = 0, l = 0;

    for (int i = 0; i < len; i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            l = max(l, mp[s[i]] + 1);
        }
        ans = max(ans, i - l + 1);
        mp[s[i]] = i;
    }
    return ans;
    }
};