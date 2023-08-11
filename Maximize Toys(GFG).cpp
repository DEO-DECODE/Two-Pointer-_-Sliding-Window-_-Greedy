//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int n, int k, vector<int> a)
    {
        // code here
        
        priority_queue<int,vector<int>,greater<int>>pq;
        int i=0;
        int res=0;
        while(i<n)
        {
            pq.push(a[i]);
            i++;
        }
        while(!pq.empty() && k-pq.top()>=0)
        {
            k-=pq.top();
            pq.pop();
            res++;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends
