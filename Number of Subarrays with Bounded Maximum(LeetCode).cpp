#include <bits/stdc++.h>
using namespace std;
//  Number of Subarrays with Bounded Maximum(LeetCode)
int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
{
    int n = nums.size();
    int start = -1, end = -1;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > right)
        {
            end = i;
            start = i;
        }
        if (nums[i] <= right && nums[i] >= left)
        {
            end = i;
        }
        ans += (end - start);
    }
    return ans;
}
