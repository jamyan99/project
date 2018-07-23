class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n, i, ans = 0;   
        
        n = nums.size();
        
        for (i = 0; i < n; i++){
            if (nums[i] == target)
                ans = i;
            if (nums[i] < target)
                ans = i + 1;
        }
        
        return ans;
        
    }
};
