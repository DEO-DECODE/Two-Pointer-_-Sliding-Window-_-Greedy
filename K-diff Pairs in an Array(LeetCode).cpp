class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
        
        for(auto n:nums)
            mp[n]++;
        int ans=0;
        for(auto it:mp)
        {
            if(k==0 and it.second>1)
                    ans++;
            else if(k>0 and mp.count(it.first+k))
                    ans++;
        }
        return ans;
    }
};
