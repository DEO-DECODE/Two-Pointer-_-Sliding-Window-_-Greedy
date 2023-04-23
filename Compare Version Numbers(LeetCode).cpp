#include <bits/stdc++.h>
using namespace std;
// Compare Version Numbers(LeetCode)
int compareVersion(string version1, string version2)
{
    int i = 0, j = 0, n1 = version1.size(), n2 = version2.size(), num1 = 0, num2 = 0;
    // The biggest point to be noted is that each revisions can be stored in integer.
    // So we dont, need to care about leading zeroes and all.
    while (i < n1 || j < n2)
    {
        num1 = 0, num2 = 0;
        while (i < n1 && version1[i] != '.')
        {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }
        while (j < n2 && version2[j] != '.')
        {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }
        if (num1 > num2)
            return 1;
        else if (num1 < num2)
        {
            return -1;
        }
        i++, j++;
    }
    return 0;
}
