#include <bits/stdc++.h>
using namespace std;
// Longest Mountain in Array(LeetCode)
int longestMountain(vector<int> &arr)
{
    int n = arr.size(), i = 1, ans = 0, right = 0, left = 0;
    while (i < n - 1)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            left = i, right = i;
            while (left > 0 && arr[left] > arr[left - 1])
            {
                left--;
            }
            while (right < n - 1 && arr[right] > arr[right + 1])
            {
                right++;
            }
            ans = max(ans, right - left + 1);
            i = right;
        }
        i++;
    }
    return ans;
}
