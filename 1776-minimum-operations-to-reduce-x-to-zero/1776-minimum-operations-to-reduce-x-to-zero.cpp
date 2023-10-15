class Solution {
public:
  int minOperations(vector<int> &nums, int x)
{
    int sum = accumulate(nums.begin(), nums.end(), 0);
 
    int reqsum = sum - x;
    if (reqsum == 0)
    {
        return nums.size();
    }
    if (reqsum < 0)
    {
        return -1;
    }
    int head = 0, tail = 0, mysum = 0, maxlen = 0;
    for (head = 0; head < nums.size(); head++)
    {
        mysum += nums[head];
        while (mysum > reqsum)
        {
            mysum -= nums[tail++];
        }
        if (mysum == reqsum)
        {
            maxlen = max(maxlen, head - tail + 1);
        }
    }
    return maxlen == 0 ? -1 : nums.size() - maxlen;
}
};