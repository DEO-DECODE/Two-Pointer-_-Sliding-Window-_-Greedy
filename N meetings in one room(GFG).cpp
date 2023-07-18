
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
  static  bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; ++i)
        {
            vec[i] = {start[i], end[i]};
        }
        int prevWorking = -1;
        sort(vec.begin(), vec.end(), cmp);
        int i=0;
        int numActivity=0;
        while (i<n)
        {
            if(prevWorking<vec[i].first){
                numActivity++;
                prevWorking=vec[i].second;
            }
            i++;
        }
        return numActivity;
    }
};
