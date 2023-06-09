class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
        // maximum profit
    }
    else
        return a.second < b.second;
    // minimum effort
}
int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
{
    int n = difficulty.size();
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i)
    {
        vec.push_back({profit[i], difficulty[i]});
    }
    sort(vec.begin(), vec.end(), cmp);
    int totalProfit = 0;
    for (int i = 0; i < worker.size(); ++i)
    {
        int currDifficulty = worker[i];
        auto itr = vec.begin();
        while (itr != vec.end())
        {
            if ((*itr).second <= currDifficulty)
            {
                totalProfit += (*itr).first;
                break;
            }
            itr++;
        }
    }
    return totalProfit;
}
};
