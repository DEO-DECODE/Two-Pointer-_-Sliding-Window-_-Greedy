 bool comp(string &a, string &b)
{
   return a.size() < b.size();
}
bool check(string word1, string word2)
{
   // word2 has one more length than word1.
   if (word2.size() - 1 != word1.size())
      return false;
   for (int ind = 0; ind < word2.size(); ++ind)
   {
      string temp = word2;
      temp.erase(temp.begin() + ind);
      // cout << word1 << " " << temp << endl;
      if (temp == word1)
         return true;
   }
   return false;
}
class Solution {
public:
   
int longestStrChain(vector<string> &words)
{
   int n = words.size();
   vector<int> dp(n, 1);
   sort(words.begin(), words.end(), comp);
   int maxi = 1;
   for (int i = 0; i < n; ++i)
   {
      int len = 1;
      for (int j = 0; j < i; ++j)
      {
         if (check(words[j], words[i]))
         {
            dp[i] = max(dp[i], 1 + dp[j]);
         }
      }
      if (dp[i] > maxi)
      {
         maxi = dp[i];
      }
   }

   return maxi;
}
};
