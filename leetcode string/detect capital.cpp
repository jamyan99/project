class Solution {
public:
    bool detectCapitalUse(string word) {
        int n, i;
        
        n = word.length();
        
        bool ans = true;
        
        if (word[0] < 91){
            if (word[1] < 91){
                for (i = 2; i < n; i++){
                    if (word[i] > 96)
                        ans = false;
                }
            }else{
                for (i = 2; i < n; i++){
                    if (word[i] < 97)
                        ans = false;
                }
            }
        }else{
            for (i = 0; i < n; i++){
                if (word[i] < 97)
                    ans = false;
            }
        }
        return ans;
    }
};


