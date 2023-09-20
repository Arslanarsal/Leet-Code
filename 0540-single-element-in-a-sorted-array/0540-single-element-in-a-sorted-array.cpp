class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            int min = 0, max = nums.size() - 1, mid;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if ((min == max) || ((mid != 0 && nums[mid] != nums[mid - 1]) && (mid != (nums.size() - 1) && nums[mid] != nums[mid + 1])))
        {
            return nums[mid];
        }

        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid + 1])
            {
                min = mid + 2;
            }
            else
            {
                max = mid - 1;
            }
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                min = mid + 1;
            }
            else
            {
                max = mid - 1;
            }
        }
    }
    return nums[min];
    }
};