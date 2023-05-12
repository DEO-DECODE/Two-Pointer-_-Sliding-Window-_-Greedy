class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {

        int good = nums[i];
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {

            int better = nums[j];
            int best = nums[k];
            int target = -nums[i];
            if (nums[j] + nums[k] == target)
            {
                vector<int> temp;
                temp.push_back(good);
                temp.push_back(better);
                temp.push_back(best);
                ans.push_back(temp);
                j++;
                k--;
            }
            else if (nums[j] +nums[k] < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
    }
};
