class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            int n = nums.size() - 1;
    int min = 0;
    int max = n;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (nums[mid] == target)
        {

            return mid;
        }

        else if (mid != 0 && ((nums[mid - 1] < target) && (target < nums[mid])))
        {
            return mid;
        }

        else if (mid != n && ((nums[mid] < target) && (target < nums[mid + 1])))
        {
            return mid + 1;
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
    if (target < nums[0])
    {
        return 0;
    }
    if (target > nums[n])
    {
        return n+1;
    }
    return -1;
    }
};