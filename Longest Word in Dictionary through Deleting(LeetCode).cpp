#include <bits/stdc++.h>
using namespace std;
// Longest Word in Dictionary through Deleting(LeetCode)
bool canBeFormed(string &s, string &dictWord)
{
    int i = 0, j = 0, n = s.size(), n1 = dictWord.size();
    while (i < n && j < n1)
    {
        if (s[i] == dictWord[j])
        {
            i++, j++;
        }
        else
            i++;
    }
    return j == n1;
}
string findLongestWord(string s, vector<string> &dictionary)
{
    string ans = "";
    for (int i = 0; i < dictionary.size(); ++i)
    {
        if (canBeFormed(s, dictionary[i]))
        {
            if (ans.size() < dictionary[i].size() || (dictionary[i].size() == ans.size() && dictionary[i] < ans)){
                ans=dictionary[i];
            }
        }
    }
    return ans;
}
