class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
    int n = s.size(), missMatch = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '[')
        {
            st.push('[');
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
                missMatch++;
        }
    }
    return (missMatch+1)/2;
    }
};
