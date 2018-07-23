class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int n, len, i, j, s = 0;
        bool ans = true;
        
        n = ransomNote.length();
        len = magazine.length();
        
        vector<int> count(26, 0);
        
        for (char letter : magazine){
            count[letter - 'a']++;
        }
        for (char letter : ransomNote){
            if (count[letter - 'a'] == 0)
                ans = false;
            count[letter - 'a']--;
        }
        
        return ans;
    }
};
