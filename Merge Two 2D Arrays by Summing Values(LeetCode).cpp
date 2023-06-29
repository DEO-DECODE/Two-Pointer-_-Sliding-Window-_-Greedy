class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i=0,j=0;
        vector<vector<int>> ans;

        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i][0]==nums2[j][0]) //if present in both
            {
                vector<int> v;
                v.push_back(nums1[i][0]);
                v.push_back(nums1[i][1]+nums2[j][1]);
                ans.push_back(v);
                i++;j++;
            }
            else if(nums1[i][0]<nums2[j][0]) //if present in nums1
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else   //if present in nums2 only
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size()) // if nums1 bigger than nums2
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())   // if nums2 bigger than nums1
        {
            ans.push_back(nums2[j]);
            j++;
        }
        
        return ans;
    }
};
