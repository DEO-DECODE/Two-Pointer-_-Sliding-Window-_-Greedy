class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int i=0,j=1,n=nums.size();
        int ans=0;
        while(j<n)
        {
            if(nums[i]<nums[j])
            {
                i++;
                ans++;
            }
            j++;
        }
        return ans;
    }
};
