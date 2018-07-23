class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n, i, s = 0;
        
        n = digits.size();
        
        if (n == 1 && digits[n - 1] != 9){
            digits[n - 1]++;
            return digits;
        }
        
        for (i = n - 1; i > 0; i--){
            if (digits[i] == 9)
                digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
        
        if (digits[0] == 0 || digits[0] == 9){
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        
        if (digits[0] != 9)
            digits[0]++;
            
        return digits;
        
    }
};
