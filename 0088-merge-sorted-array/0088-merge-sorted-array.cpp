class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int len = n + m;
    for (int i = 0; i < nums2.size(); i++)
    {
        nums1[m] = nums2[i];
        m++;
    }
    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0;
        int right = gap;
        while (right < len)
        {
            if (nums1[left] > nums1[right])
            {
                swap(nums1[left], nums1[right]);
            }
            left++;
            right++;
        }
       
        
        if (gap == 1)
        {
            return;
        }
        gap = (gap / 2) + (gap % 2);
    
    }
    }
};