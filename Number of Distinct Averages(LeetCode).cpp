class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        unordered_map<double,int> ourmap;
        while(i<=j){
            
            double avg=(double)(nums[i]+nums[j])/2;
            ourmap[avg]++;
            if(nums[i]==nums[j]){
                i++;
            }
            else{
              i++;
              j--;
            }
        }
        return ourmap.size();
    }
};
