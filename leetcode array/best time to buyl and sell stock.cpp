class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        if (a.size() == 0)
            return 0;
            
        int n, i, m = a[0], ans = 0;
        
        n = a.size();
        
        for (i = 0; i < n; i++){
            m = min(m, a[i]);
            ans = max(ans, a[i] - m);
        }
        
        
        return ans;
        
    }
};
