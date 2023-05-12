class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
    int summ=INT_MAX;
    int ans;
    for(int i=0; i<nums.size()-2; ++i){
        if(i==0||(i>0&&nums[i]!=nums[i-1])){
            int lo=i+1, hi=nums.size()-1;
            while(lo<hi){
                int absdiff=abs(target-(nums[i]+nums[lo]+nums[hi]));
                int summ;
                if((absdiff)<summ){
                    summ=abs(target-(nums[i]+nums[lo]+nums[hi]));
                    ans=nums[i]+nums[lo]+nums[hi];
                }
                if(nums[i]+nums[lo]+nums[hi]>target) hi--;
                else lo++;
            }
        }
    }
    return ans;
    }
};
