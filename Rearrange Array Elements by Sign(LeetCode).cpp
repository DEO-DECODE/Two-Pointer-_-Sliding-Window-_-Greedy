class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),i,j=-2,k=-1;
        vector<int> ans(n,0);
        for(i=0;i<n;i++) if(nums[i]>0) ans[j+=2]=nums[i];else ans[k+=2]=nums[i];
        return ans;
    }
};
