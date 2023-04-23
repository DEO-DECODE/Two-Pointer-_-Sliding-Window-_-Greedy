#include <bits/stdc++.h>
using namespace std;
// String Compression(LeetCode)
int compress(vector<char> &chars)
{
    int n = chars.size(), i = 0, ans = 0, j=0, cnt=0;
    while (i < n)
    {
        chars[j]=chars[i];
        cnt=0;
        while (i<n&&chars[j]==chars[i])
        {
            cnt++;
            i++;
        }
        if(cnt==1){
            j++;
        }
        else{
            string str=to_string(cnt);
            for(auto ch: str){
                chars[++j]=ch;
            }
            j++;
        }
        
    }
    return j;
}
