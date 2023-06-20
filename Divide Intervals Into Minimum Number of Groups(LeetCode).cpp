class Solution {
public:
    int minGroups(vector<vector<int>>& intr) {
         sort(intr.begin(),intr.end());
        multiset<int> s;

        //insert the end of the fisrt interval in multiset
        s.insert(intr[0][1]);

        // now for each interval we check if there exist an ending smaller than the beginning of current interval
        // if yes we can have both of these interval in a single group 
        for(int i=1;i<intr.size();i++){
            auto it = s.lower_bound(intr[i][0]);

            // if lower_bound point to first element then there is no ending smaller than current beginning hence a new group is created and ending of this interval is pushed in multiset
            if(it==s.begin()){
                s.insert(intr[i][1]);
            }

            // else we can group this interval to end of it-1 interval hence, we update the end of this group by deling the previous end and inserting ending of this interval
            else{
                it--;
                s.erase(it);
                s.insert(intr[i][1]);
            }
        }

        // number of ending in the multiset is eqaul to number of groups (as multiset has the group ending value)
        return s.size();
    }
};
