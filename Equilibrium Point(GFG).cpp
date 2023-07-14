//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
          if(n==1) return 1;
        long long presum[n]={0};
        long long sufsum[n]={0};
        presum[0]=arr[0],sufsum[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            presum[i]=arr[i]+presum[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sufsum[i]=arr[i]+sufsum[i+1];
        }
        for(int i=0;i<n;i++){
            if(presum[i]==sufsum[i])
               return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
