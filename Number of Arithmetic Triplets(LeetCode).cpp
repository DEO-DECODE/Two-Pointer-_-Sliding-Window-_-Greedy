class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff)
{
    int ans = 0;
    int n_count = 0;
    int old_num;
    for (int i = 0; i < nums.size(); ++i)
    {
        old_num = nums[i];
        for (int j = i+1; j < nums.size(); ++j)
        {
            
           
            if (old_num == nums[j] - diff)
            {
                old_num = nums[j];
                ++n_count;
            }
            if (n_count == 2)
            {
                ++ans;
                break;
            }
        }
        n_count = 0;
    }
    return ans;
}
};
