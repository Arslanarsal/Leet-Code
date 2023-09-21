class Solution {
public:
   int fun(vector<int> &piles)
{
    int ans = INT_MIN;
    for (int i = 0; i < piles.size(); i++)
    {
        ans = max(ans, piles[i]);
    }
    return ans;
}
int findH(vector<int> &piles, int mid)
{
    
    if (mid == 0)
        return INT_MAX; 

    int ans = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        ans += ceil((double)piles[i] / (double)mid);
    }
    return ans;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int min = 0, mid;
    int max = fun(piles);
    while (min <= max)
    {
        mid = (min + max) / 2;
        int total = findH(piles, mid);
        if (total <= h)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return min;
}
};