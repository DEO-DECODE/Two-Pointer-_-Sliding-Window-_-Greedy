
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code 
         vector<vector <int>> sol;

        int p=0,profit;

        for(int i=0; i<n; i++)

        {

            if(A[i]>A[i+1]||i==n-1)

            {

                profit=A[i]-A[p];

                if(profit>0)

                    sol.push_back({p,i});

                p=i+1;

            }

        }

        return sol;
    }
};
