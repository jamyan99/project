class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n, i, j, s = 0;
        
        n = nums.size();
        
        vector <int> ans(2);
        
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (nums[i] + nums[j] == target && i != j){
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
            
        return ans;
    }
};
