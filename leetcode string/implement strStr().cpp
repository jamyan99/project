class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a, b, i, j = 0, ans = -1, save, c = 0;
        
        a = haystack.length();
        b = needle.length();
        
        for (i = 0; i < a && ans == -1; i++){
            save = i;
            if (haystack[i] == needle[j]){
                for (; j < b && c == 0; j++){
                    if (haystack[i] != needle[j])
                        c = 1;
                    i++;
                }                
            }
            if (c == 0 && j == b)
                ans = save;
            i = save;
            c = 0;
            j = 0;
        }
        if (b == 0)
            ans = 0;
        return ans;
        
    }
};
