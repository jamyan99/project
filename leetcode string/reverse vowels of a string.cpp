class Solution {
public:
    string reverseVowels(string s) {
        
        int n, i, j, c = 0;
        
        string word;
        
        n = s.length();
        
        for (i = 0; i < n && c == 0; i++){
             if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                for (j = n - 1; j > 0 && c == 0; j--){
                     if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' ||  s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){
                        swap(s[i], s[j]);
                        c = 1;
                     }
                }
            }
            if (c == 1)
                n = j + 1;
            c = 0;
        }
        
        return s;
    }
};
