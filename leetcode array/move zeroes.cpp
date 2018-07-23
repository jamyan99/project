class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n, i, j, count = 0, last, c = 0;
        
        n = nums.size();
    
        for (i = 1; i < n; i++){
            for (j = i; j > 0 && c == 0; j--){
                if (nums[j - 1] == 0)
                    swap(nums[j - 1], nums[j]);
                else
                    c = 1;
            }
            c = 0;
        }
        
    }
};
