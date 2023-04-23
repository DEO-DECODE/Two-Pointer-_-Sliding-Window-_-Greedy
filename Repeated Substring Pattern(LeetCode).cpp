#include <bits/stdc++.h>
using namespace std;
// Repeated Substring Pattern(LeetCode).
bool repeatedSubstringPattern(string s)
{
    int n = s.size(), i = 0, j = 0;
    vector<int> lps(n, 0);
    for (int i = 1; i < n; ++i)
    {
        int j = lps[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = lps[j - 1];
        }
        if (s[i] == s[j])
            j++;
        lps[i] = j;
    }
    // Longest Prefix Suffix vector created.
    int val = lps[n - 1];
    // cout<<val<<endl;
    if(val==0) return false;
    else{
        string temp=s.substr(0, n-val);
        string ans="";
        for(int i=0; i<s.size()/ temp.size(); ++i){
            ans+=temp;
        }
        // cout<<ans<<endl;
        if(ans==s) return true;
    }
    return true;
}
int main()
{
    string s = "abcabcabcabc";
    cout << repeatedSubstringPattern(s) << endl;
}
