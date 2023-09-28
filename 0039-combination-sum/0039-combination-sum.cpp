class Solution {
public:
  void solve(vector<int> &nums, int target, int idx, vector<int> &temp, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    if (idx == nums.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }

    if (target - nums[idx] >= 0)
    {
        temp.push_back(nums[idx]);

        solve(nums, (target - nums[idx]), idx, temp, ans);
        temp.pop_back();
    }
    solve(nums, target, idx + 1, temp, ans);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(candidates, target, 0, temp, ans);
    return ans;
}
};