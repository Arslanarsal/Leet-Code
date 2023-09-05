class Solution {
public:
    void sortColors(vector<int>& nums) {
   int a = 0, b = 0, c = nums.size() - 1;
    while (a <= c)
    {
        if (nums[a] == 2)
        {
            swap(nums[a], nums[c]);
            c--;
        }
        else if (nums[a] == 0)
        {
            swap(nums[a], nums[b]);
            a++;
            b++;
        }
        else
        {
            a++;
        }
    }}
};