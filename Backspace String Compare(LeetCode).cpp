class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '#')
        {
            st1.push(s[i]);
        }
        else
        {
            if (!st1.empty())
                st1.pop();
        }
    }
    for (int i = 0; i < t.size(); ++i)
    {
        if (t[i] != '#')
        {
            st2.push(t[i]);
        }
        else
        {
            if (!st2.empty())
                st2.pop();
        }
    }
    string str1, str2;
    while ((!st1.empty())&&(!st2.empty()))
    {
        if(st1.top()!=st2.top()){
            return false;
        }
        else{
            str1.push_back(st1.top());
            str2.push_back(st2.top());
            st1.pop(); st2.pop();
        }
    }
    if(st1.size()!=st2.size()) return false;
    return str1==str2;
    }
};
