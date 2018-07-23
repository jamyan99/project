class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n, i = 0, ans, s = 0, max;
        
        n = nums.size();
        
        max = nums[0];
        for (i = 1; i < n; i++){
            if (nums[i] > max){
                max = nums[i];
                s = i;
            }
        } 
        ans = s;
        
        for (i = 0; i < n; i++){
            if (nums[s] / 2 < nums[i] && s != i)
                ans = -1;
        }
        return ans;
    }
};
