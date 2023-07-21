//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string arr){
        //code
                vector<int> mp(26,0);
        int i=0;
        int j=0;
        int ans=-1;
        int n=arr.size();
        
        while(j<n)
        {
            mp[arr[j]-'a']++;
            if(mp[arr[j]-'a']==1)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            if(mp[arr[j]-'a']>1)
            {
                while(mp[arr[j]-'a']>1)
                {
                    mp[arr[i]-'a']--;
                    i++;
                }
                j++;
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends
