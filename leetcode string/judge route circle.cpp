class Solution {
public:
    bool judgeCircle(string moves) {
        
        int n, i, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        
        bool ans;
        
        n = moves.length();
        
        for (i = 0; i < n; i++){
            if ('U' == moves[i])
                count1++;
            if ('D' == moves[i])
                count2++;
            if ('L' == moves[i])
                count3++;
            if ('R' == moves[i])
                count4++;
        }
        if (count1 == count2 && count3 == count4)
            ans = true;
        else
            ans = false;
            
        
        return ans;
    }
};
