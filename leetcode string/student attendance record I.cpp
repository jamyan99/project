class Solution {
public:
    bool checkRecord(string s) {
        
        int n, i, count1 = 0, count2 = 0;
        
        n = s.length();
        
        bool ans = true;
        
        for (i = 0; i < n && ans == true; i++){
            if ('A' == s[i])
                count1++;
            if ('L' == s[i]){
                if ('L' == s[i + 1]){
                    if ('L' == s[i + 2]){
                        ans = false;
                    }
                }
            }
            if (count1 == 2)
                ans = false;
        }
       

        return ans;
    }
};
