class Solution {
public:
    bool isPalindrome(string s) {
    string str;
    for(int i=0; i<s.length(); ++i){
        string temp;
        
        while(i<s.length()&&isalnum(s[i])){
            if(s[i]>='A'&&s[i]<='Z'){
                char tempchar=s[i];
                s[i]=tolower(tempchar);
        }
            temp.push_back(s[i]);
            i++;
        }
        if(temp.length()) str+=temp;
    }
    string str2=str;
    reverse(str.begin(), str.end());
    return str==str2? 1: 0;
}

};
