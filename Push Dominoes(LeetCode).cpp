#include <bits/stdc++.h>
using namespace std;
// Push Dominoes(LeetCode)
string pushDominoes(string dominoes)
{
    int n = dominoes.size();
    vector<int> nearestRight(n, -1), nearestLeft(n, -1);
    for (int i = 0; i < n; ++i)
    {
        if (dominoes[i] == 'L')
        {
            nearestRight[i] = -1;
            continue;
        }
        if (dominoes[i] == 'R')
        {
            nearestRight[i] = i;
        }
        else if (i > 0 && nearestRight[i - 1] != -1)
        {
            nearestRight[i] = nearestRight[i - 1];
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (dominoes[i] == 'R')
        {
            nearestLeft[i] = -1;
            continue;
        }
        if (dominoes[i] == 'L')
        {
            nearestLeft[i] = i;
        }
        else if (i + 1 < n && nearestLeft[i + 1] != -1)
        {
            nearestLeft[i] = nearestLeft[i + 1];
        }
    }
    string ans;
    for (int i = 0; i < n; ++i)
    {
        if (nearestLeft[i] != -1 && nearestRight[i] != -1)
        {
            if (abs(i - nearestRight[i]) == abs(i - nearestLeft[i]))
                ans.push_back('.');
            else if (abs(i - nearestRight[i]) > abs(i - nearestLeft[i]))
                ans.push_back('L');
            else
            {
                ans.push_back('R');
            }
        }
        else if (nearestLeft[i] == -1 && nearestRight[i] != -1)
            ans.push_back('R');
        else if (nearestLeft[i] != -1 && nearestRight[i] == -1)
            ans.push_back('L');
        else
            ans.push_back('.');
    }
    return ans;
}
