class Solution {
public:
    int findL(vector<int>& forts, int i) {
        int cap = 0;
        while (i >= 0) {
            if (forts[i] == 1) return 0;
            if (forts[i] == -1) return cap;
            if (forts[i--] == 0) cap++;
        }
        return 0;
    }
    int findR(vector<int>& forts, int i) {
        int cap = 0;
        while (i <= forts.size() - 1) {
            if (forts[i] == 1) return 0;
            if (forts[i] == -1) return cap;
            if (forts[i++] == 0) cap++;
        }
        return 0;
    }
    int captureForts(vector<int>& forts) {
        int total = 0;
        for (int i = 0; i < forts.size(); i++) {
            if (forts[i] == 1) {
                int leftFort = findL(forts, i-1);
                int rFort = findR(forts, i+1);
                total = max(total, max(leftFort, rFort));
            }
        }
        return total;
    }
};
