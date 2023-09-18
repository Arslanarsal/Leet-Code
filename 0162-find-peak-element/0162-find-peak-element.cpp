class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int max = nums.size() - 1;
    int min = 0;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if ((mid == 0 || nums[mid] >= nums[mid - 1]) && (mid == (nums.size() - 1) || nums[mid] >= nums[mid + 1]))
        {
            return mid;
        }
        else if (mid > 0 &&nums[mid] < nums[mid - 1])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return -1;
    }
};