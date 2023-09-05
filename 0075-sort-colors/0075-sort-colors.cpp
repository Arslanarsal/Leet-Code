class Solution {
public:
    void sortColors(vector<int>& nums) {
         int a = 0;
    int b = -1;
    int c = nums.size() - 1;
    while (a <= c)
    {
        if (nums[a] == 2)
        {
            swap(nums[a], nums[c]);
            c--;
        }
        else if (nums[a] == 1)
        {
            if (b == -1)
            {
                b = a;
            }
            a++;
        }
        else
        {
            if (b != -1)
            {
                swap(nums[a], nums[b]);
                while (nums[b] != 1 && b <= a)
                {
                    b++;
                }
                if (b > a)
                {
                    b = -1;
                }
            }
            else
            {
                a++;
            }
        }
    }
    }
};