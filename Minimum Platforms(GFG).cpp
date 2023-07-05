class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
        sort(dep, dep+n);
    	int minimumPlatform=1;
        int depar= dep[0];
        int j=0;
        for(int i=1; i<n; ++i){
            if(arr[i]<=depar){
                minimumPlatform++;
            }
            else {
                depar=dep[++j];
            }
        }
        return minimumPlatform;
    }
};
