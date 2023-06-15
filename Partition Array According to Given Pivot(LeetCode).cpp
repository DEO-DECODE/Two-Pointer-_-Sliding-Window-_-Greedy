class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp,lesser,great;
        for( int i = 0;i<nums.size();i++){
            if(nums[i]==pivot) temp.push_back(nums[i]);
            else if(nums[i]<pivot) lesser.push_back(nums[i]);
            else if(nums[i]>pivot) great.push_back(nums[i]);
          }
        nums.clear();
        nums.insert(nums.begin(),lesser.begin(),lesser.end());
        nums.insert(nums.end(),temp.begin(),temp.end());
        nums.insert(nums.end(),great.begin(),great.end());
        return nums;
    }
};
