class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(int p=0;p<words.size();p++){
            int i=0;
            int j=words[p].size()-1;
            bool isPalindrome=true;
            while(i<=j){
                if(words[p][i]==words[p][j]){
                    i++;
                    j--;
                }else{
                    isPalindrome=false;
                    i++;
                    j--;
                }
            }
            if (isPalindrome){
                ans=words[p];
                break;
            }
        }
        return ans;
    }
};
