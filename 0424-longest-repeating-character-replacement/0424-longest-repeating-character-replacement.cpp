class Solution {
public:
    int characterReplacement(string s, int k) {
        int head, tail = 0, ans = 0, A[26] = {};
    for (head = 0; head < s.length(); head++)
    {
        A[s[head] - 'A']++;
        while (head - tail + 1 - *max_element(A, A + 26) > k)
        {
            A[s[tail++] - 'A']--;
        }
        ans = max(ans, head - tail + 1);
    }
    return ans;
    }
};