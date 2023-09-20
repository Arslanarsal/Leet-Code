class Solution {
public:
    int findMin(vector<int>& nums) {
            int min = 0, mid, max = nums.size() - 1;
    while (max - min > 1)
    {
        mid = (min + max) / 2;
        if (nums[min] < nums[mid] && nums[mid] > nums[max])
        {
            min = mid;
        }
        else
        {
            max = mid;
        }
    }
    if (nums[min] < nums[max])
    {
        return nums[min];
    }
    return nums[max];
    }
};