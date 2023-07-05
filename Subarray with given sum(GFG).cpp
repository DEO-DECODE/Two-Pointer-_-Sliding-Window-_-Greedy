class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> vec(2,-1), vec2;
        for(int i=0; i<n; ++i){
            int temp=i;
            int temp2=-1;
            long long sum=arr[i];
            vec[0]=i+1;
            while(sum<=s){
                if(sum==s) {
                    temp2=temp;
                    break;
                }
                temp++;
                sum+=arr[temp];
            }
            if(temp2!=-1){
                vec[1]=temp2+1;
                break;
            }
        }
        if(vec[1]==-1){
            vec2.push_back(-1);
            return vec2;
        }
        return vec;
        
    }
};
