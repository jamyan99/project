class Solution {
public:
    int firstUniqChar(string s) {
        
        int n, i;
        
        vector<int> count(50, 0);
        
        n = s.length();
        
        for (i = 0; i < n; i++){
            count[s[i] - 'a']++;
        }
        for (i = 0; i < n; i++){
            if (count[s[i] - 'a'] == 1)
                return i;
        }
        
        return - 1;
    }
};
