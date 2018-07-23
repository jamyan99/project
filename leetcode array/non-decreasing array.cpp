class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int n, i, count = 0;
        
        n = nums.size();
        
        for (i = 1; i < n; i++){
            if (nums[i] < nums[i - 1]){
                count++;
                if (count == 2)
                    return false;
                if (i != 1 && i != n - 1){
                    if (nums[i - 1] > nums[i + 1] && nums[i] < nums[i - 2])
                        return false;
                }
            }
        }
        
        return true;
    }
};
