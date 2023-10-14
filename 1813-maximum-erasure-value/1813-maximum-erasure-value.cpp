class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         int head, tail = 0, ans = 0, l = 0;
    unordered_map<int, int> mp;
    for (head = 0; head < nums.size(); head++)
    {
        while (mp[nums[head]] > 0)
        {
            l = l - nums[tail++];
            mp[nums[tail - 1]]--;
        }
        l += nums[head];
        mp[nums[head]]++;
        ans = max(ans, l);
    }
    return ans;
    }
};