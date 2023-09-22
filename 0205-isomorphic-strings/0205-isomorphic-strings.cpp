class Solution {
public:
    bool isIsomorphic(string s, string t) {
    map<int, char> mp;
    map<int, char> mp1;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == '\0' && mp1[t[i]] == '\0')
        {
            mp[s[i]] = t[i];
            mp1[t[i]] = s[i];
        }
        else
        {
            if ((mp[s[i]]) != t[i] || (mp1[t[i]]) != s[i])
            {
                return false;
            }
        }
    }
    return true;
    }
};