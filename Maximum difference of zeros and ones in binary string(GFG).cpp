//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	     int ans = INT_MIN;
    int curSum = 0;
    for (auto ch : S)
    {
        if (ch == '0')
        {
            curSum += 1;
        }
        else
        {
            curSum -= 1;
        }
        ans = max(ans, curSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
