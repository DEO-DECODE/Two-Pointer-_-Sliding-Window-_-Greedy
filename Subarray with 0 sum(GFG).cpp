class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int, int> track;
    int currSum=0;
    for(int i=0; i<n; ++i){
      currSum+=arr[i];
      if(currSum==0) return true;
      if(track[currSum]>0){
        return true;
      }
      track[currSum]++;
    }
    return false;
    }
};
