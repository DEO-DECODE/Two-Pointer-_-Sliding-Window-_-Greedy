class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& pl, vector<int>& tr) {
        priority_queue<int>pq;
        for(auto it :tr){
            pq.push(it);
        }
        sort(pl.begin(),pl.end());
        int i=pl.size()-1;
        int cnt=0;
        while(!pq.empty() && i>=0){
            if(pl[i]<=pq.top()){
                cnt++;
                 pq.pop();
            }
            i--;
        }
        return cnt;
        
    }
};
