class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size(), tmp = 0, max = 0;
        
        for (int i = 0; i < n; i++){
            if (nums[i] == 1)
                tmp++;
            else{
                if (tmp > max)
                    max = tmp;
                tmp = 0; 
            } 
        }
        if (tmp > max)
            max = tmp;
        
        return max;
    }
};
