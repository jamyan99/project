class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0, temp = 0, n, i = 0, ans;
        
        n = nums.size();
        
        for (i = 0; i < n; i++){
            sum = sum + nums[i];
        }
        for (i = 0; i < n; i++){
            if (sum - temp - nums[i] == temp){
                return i;
            }
            temp = temp + nums[i];
        }
        return -1;
        
    }
};
