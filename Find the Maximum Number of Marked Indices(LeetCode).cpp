class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0, j = nums.size()/2;i<nums.size()/2;i++){
            while(j<nums.size() && nums[j]<2*nums[i])j++;
            if(j>=nums.size())break;
            else {
                j++;
                ans+=2;
            }
        }
        return ans;
    }
};
