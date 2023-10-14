class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int head, tail = 0, prod = 1, ans = 0;
    for (head = 0; head < nums.size(); head++)
    {
        prod = prod * nums[head];
        while (prod >= k && tail<=head)
        {
            prod = prod / nums[tail++];
        }
        ans += head - tail + 1;
    }
    return ans;
    }
};