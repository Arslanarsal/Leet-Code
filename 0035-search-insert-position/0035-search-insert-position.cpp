class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size() - 1;
    int min = 0;
    int max = n;
    if (target > nums[n])
    {
        return n + 1;
    }
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (nums[mid] == target)
        {

            return mid;
        }
        else if (nums[mid] > target)
        {
            max = mid - 1;
        }
        else if (nums[mid] < target)
        {
            min = mid + 1;
        }
    }
    return min;
    }
};