//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>ans;
        int i,j;
        int d=0;
        for(i=0;i<n;i++){
            ans[arr[i]]++;
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int sum=arr[i]+arr[j];
                if(ans.find(sum)!=ans.end()){
                    d++;
                }
            }
        }
        return d;
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
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends
