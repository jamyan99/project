class Solution {
public:
    int countSegments(string s) {
        
        int n, i, ans = 0, count = 0;
        
        n = s.length();
        
        for (i = 0; i < n; i++){
            if (s[i] != ' ')
                count++;
            else{
                if (count > 0)
                    ans++;
                count = 0;
            }
        }
        if (count > 0)
            ans++;
        
        return ans;
        
    }
};
