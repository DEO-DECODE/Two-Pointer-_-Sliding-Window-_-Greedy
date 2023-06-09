class Solution {
public:
    bool isAlpha(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
string reverseVowels(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        
        if (isAlpha(s[i]))
        {
            // cout<<i<<" - ";
            while (j > i &&!isAlpha(s[j]))
            {
                j--;
            }
            // cout<<j<<endl;
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            j--;
        }
        i++;
    }
    return s;
}
};
