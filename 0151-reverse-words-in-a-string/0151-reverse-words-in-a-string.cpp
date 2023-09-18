class Solution {
public:
    string reverseWords(string s) {
    stack<string> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (s[i] != ' ' && i < n)
        {
            word += s[i];
            i++;
        }
        if (!word.empty())
        {
            st.push(word);
        }
    }
    string ans;
    ans += st.top();
    st.pop();
    while (!st.empty())
    {
        ans += ' ';
        ans += st.top();
        st.pop();
    }
    return ans;
    }
};