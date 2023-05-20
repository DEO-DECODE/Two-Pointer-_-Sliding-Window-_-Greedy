class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        int ind= haystack.find(needle);
        if(ind>haystack.length()) return -1;
        return ind;
    }
};
