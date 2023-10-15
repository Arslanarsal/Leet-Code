class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int head, tail = 0, sum = 0, ans = INT_MAX;
    for (head = 0; head < nums.size(); head++)
    {
        sum += nums[head];
        while (sum >= target)
        {
            int temp = head - tail + 1;
            ans = min(ans, temp);
            sum -= nums[tail++];
        }
    }
    if (ans == INT_MAX)
    {
        return 0;
    }
    return ans;
    }
};