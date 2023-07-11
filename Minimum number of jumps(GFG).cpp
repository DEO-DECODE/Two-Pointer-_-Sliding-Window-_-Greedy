//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumps = 0, curEnd = 0, curFarthest = 0;
    for (int i = 0; i < n - 1; i++)
    {
        curFarthest = max(curFarthest, i + arr[i]);

        
        if (i >= curFarthest)
            return -1;

        if (i == curEnd)
        {
            jumps++;

            curEnd = curFarthest;
        }
    }
    return jumps;

    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
