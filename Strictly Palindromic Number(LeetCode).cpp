class Solution {
public:
    string fun(int n,int base){
        string ans ="";
        while(n >0){
            int rem = n%base;
           // cout<<to_string(rem)<<"  ";
            ans += (to_string(rem));
            n = n/base;
        }
       reverse(ans.begin(),ans.end());
        
        return ans;
    }
    bool pali(string s){
         int i =0;
        int j = s.length()-1;
        while(i < j){
           
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
       // string s = fun(n);
        
        for(int i = 2;i<=n-2;i++){
            
            string str = fun(n,i);
            
            if(!pali(str)){
                return false;
            }
        }
        return true;
       
    }
};
