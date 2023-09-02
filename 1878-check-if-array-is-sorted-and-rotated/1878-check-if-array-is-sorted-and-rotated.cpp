class Solution {
public:
    bool check(vector<int>& nums) {
        
    int i;
    for (i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1] && nums[i] <= nums[0])
        {
            break;
        }

        if (nums[i] < nums[i - 1])
        {
            return false;
        }
    }
    if (i == nums.size()-1)
    {
        return true;
    }
    i++;
    while (i < nums.size())
    {
        if (nums[i] < nums[i - 1] || nums[i] > nums[0])
        {
           return false;
        }
        i++;
    }
    return true;
    }
};