class Solution {
public:
    const int m = 1e9 + 7;
    int binExp(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1ll * a) % m;
        }
        b = b >> 1;
        a = (a * 1ll * a) % m;
    }
    return ans;
}
int numSubseq(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1, ans = 0;
    while (i <= j)
    {
        if (nums[i] + nums[j] <= target)
        {
            ans = (ans + binExp(2, j - i)) % m;
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}
};
