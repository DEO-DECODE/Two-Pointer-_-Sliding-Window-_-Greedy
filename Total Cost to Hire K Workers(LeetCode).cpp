#define ll long long
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>>>pq;
        int n=costs.size();
        int x= candidates;
        ll i=0 , j=n-1 , ans=0;
        while( i<j and (x--) ){
            pq.push({costs[i],i});
            pq.push({costs[j],j});
            i++,j--;
        }
        if(i==j and x>0) pq.push({costs[i],i}),i++;
        while((k--)   and pq.size()>0){
            pair<ll, ll> x = pq.top();
            pq.pop();
            ans+=x.first;
            if(x.second<i and i<=j){
                pq.push({costs[i],i});
                i++;
            }
            else if(x.second>j and i<=j){
                pq.push({costs[j],j});
                j--;
            }
        }
       return ans;
    }
};
