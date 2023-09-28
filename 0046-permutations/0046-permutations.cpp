class Solution {
public:
void recurpermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!(freq[i]))
        {
            ds.push_back(nums[i]);
            freq[i] = true;
            recurpermute(ds, nums, ans, freq);
            freq[i] = false;
            ds.pop_back();
        }
    }
}

void solvee(vector<int> &nums, vector<vector<int>> &ans, int idx)
{
    if (idx >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        solvee(nums, ans, idx + 1);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    solvee(nums, ans, 0);

    return ans;
}
};