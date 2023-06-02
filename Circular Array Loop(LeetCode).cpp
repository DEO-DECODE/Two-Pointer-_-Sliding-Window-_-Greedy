class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            if (dfs(nums, i, 0, 0, 0, i))
            {
                return true;
            }
            visited_.clear();
        }
        return false;
    }
private:
    using Visited = unordered_set<int>; 
    bool dfs(vector<int>& nums, const int curr, const int num_pos, const int num_neg, const int num_in_cycle, const int first)
    {
        if (visited_.count(curr)) 
        {
            // we need (first == curr) because for num_in_cycle to be meaningful we need to check complete cycles
            return (num_pos == num_in_cycle || num_neg == num_in_cycle) && (num_in_cycle > 1) && (first == curr);
        }
        visited_.emplace(curr);

        int next = curr + nums[curr];
        if (next < 0)
        {
            // note we cannot just do % because for example -2 % 3 is -2 but we want position 1
            // we need to do (-1 * -2) % 3 
            next = nums.size() - ((-1 * next) % nums.size());
        }
        // even for negative numbers, next could have been nums.size() which we would need to mod
        next = next % nums.size();

        int pos = nums[curr] > 0 ? 1 : 0;
        int neg = nums[curr] < 0 ? 1 : 0;
        return dfs(nums, next, num_pos+pos, num_neg+neg, num_in_cycle+1, first);
    }

    unordered_set<int> visited_{};
};
