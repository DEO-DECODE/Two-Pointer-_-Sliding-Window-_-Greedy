#include <bits/stdc++.h>
using namespace std;
// Advantage Shuffle(LeetCode)
vector<int> advantageCount(vector<int> &nums1, vector<int> &nums2)
{
    multiset<int> st(nums1.begin(), nums1.end());
    int n = nums2.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; ++i)
    {
        auto itr = st.upper_bound(nums2[i]);
        if (itr == st.end())
        {
            ans[i] = (*st.begin());
            st.erase(st.begin());
        }
        else
        {
            ans[i] = (*itr);
            st.erase(itr);
        }
    }
    return ans;
}
