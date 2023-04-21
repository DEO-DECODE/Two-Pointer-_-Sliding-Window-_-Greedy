#include <bits/stdc++.h>
using namespace std;
//Ways to Split Array Into Three Subarrays(LeetCode)
const int mod = 1e9 + 7;
int waysToSplit(vector<int> &nums)
{
    int n = nums.size(), cnt = 0, j = 0, k = 0;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; ++i)
    {
        prefixSum[i] = nums[i] + prefixSum[i - 1];
    }
    for (int i = 0; i < n - 2; ++i)
    {
        if (j <= i)
        {
            j = i + 1;
        }
        while (j < n - 1 && prefixSum[j] - prefixSum[i] < prefixSum[i])
        {
            j++;
        }
        if (k < j)
            k = j;
        while (k < n - 1 && prefixSum[k] - prefixSum[i] <= prefixSum[n - 1] - prefixSum[k])
        {
            k++;
        }
        cnt = (cnt + (k - j)) % mod;
    }
    return cnt;
}
