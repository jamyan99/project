class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n, i, count = 0;
        
        n = s.length();
        
        i = n - 1;
        
        while (i >= 0 && s[i] == ' '){
            i--;
        }
        while (i >= 0 && s[i] != ' '){
            count++;
            i--;
        }
        
        return count;
    } 
};
