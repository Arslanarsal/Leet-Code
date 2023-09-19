class Solution {
public:
    int firstoccerane(vector<int> &nums, int &target)
{
    int start = 0, end = nums.size() - 1;
    int index = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            index = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return index;
}
int lastoccerane(vector<int> &nums, int &target)
{
    int start = 0, end = nums.size() - 1;
    int index = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            index = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return index;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int first = firstoccerane(nums, target);
    if (first == -1)
    {
        return {-1, -1};
    }
    int last = lastoccerane(nums, target);
    return {first, last};
}
};