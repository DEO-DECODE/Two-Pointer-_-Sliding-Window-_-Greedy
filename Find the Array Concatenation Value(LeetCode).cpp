class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long i=0,j=nums.size()-1,concat=0,n=nums.size();
       
        while(i<j)
        {
           string s=to_string(nums[i]) + to_string(nums[j]);
           concat+=stoi(s);
           i++;
           j--;
        }
        if(i==j)
        {
            concat+=nums[i];
        }
        return concat;
    }
};
