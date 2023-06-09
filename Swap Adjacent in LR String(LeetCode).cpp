class Solution {
public:
    bool canTransform(string start, string end) {
    int n = start.size(), i = 0, j = 0;
    while (i < n && j < n)
    {
        while (start[i] == 'X')
        {
            i++;
        }
        while (end[j] == 'X')
        {
            j++;
        }
        if (i == start.size() && j == end.size())
            return true;
        if (i == start.size() || j == end.size())
            return false;
        if (start[i] != end[j])
            return false;
        else if (start[i] == 'R' && i > j)
            return false;
        else if (start[i] == 'L' && i < j)
            return false;
        i++, j++;
    }
    while (i < start.size() && start[i] == 'X')
        i++;
    while (j < end.size() && end[j] == 'X')
        j++;
    return i == j;
    }
};
