//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
          int n=str.size();
        unordered_set<char>s;
        for(auto ch:str){
            s.insert(ch);
        }
        unordered_map<char,int >mp;
        int ans=1e8;
        
        int i=0,j=0;
        while(j<n){
            mp[str[j]]++;
            while(mp.size()==s.size()){
                ans=min(ans,j-i+1);
                mp[str[i]]--;
                if(mp[str[i]]==0)mp.erase(str[i]);
                i++;
                
            }  
            j++;
           
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends
