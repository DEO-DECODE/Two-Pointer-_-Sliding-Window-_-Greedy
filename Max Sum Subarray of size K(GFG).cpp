//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
        long sum=0;
       long ans=0;
       for(int i=0;i<K;i++)
       {
           sum=sum+arr[i];
       }
       
       for(int i=K;i<N;i++)
       {
           ans=max(ans,sum);
           sum=sum-arr[i-K];
           sum=sum+arr[i];
           
           
       }
       
       return max(sum,ans);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
