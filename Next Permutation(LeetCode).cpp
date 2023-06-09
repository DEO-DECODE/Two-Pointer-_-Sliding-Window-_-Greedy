class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1, n=nums.size();
    for(int i=n-1; i>=1; --i){
        if(nums[i]>nums[i-1]){
            index=i;
            break;
        }
    }
    if(index==-1) reverse(nums.begin
    (), nums.end());
    else{
        int index2=-1;
        for(int j=n-1; j>=index; j--)
        {
            if(nums[j]>nums[index-1]){
                index2=j;
                break;
            }
        }
        swap(nums[index-1], nums[index2]);
        sort(nums.begin()+index, nums.end());
    }
    }
};
