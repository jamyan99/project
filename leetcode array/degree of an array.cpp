class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int max_degree = 1, ans;
        int len = nums.size();
        
        ans = len;
        vector<int> count(50000, 0);
        vector<int> fi(50000, -1);
        
        for (int i = 0; i < len; i++){
            count[nums[i]]++;
            if (count[nums[i]] > max_degree)
                max_degree = count[nums[i]];
        }
        
        for (int i = 0; i < len; i++){
            if (fi[nums[i]] == -1)
                fi[nums[i]] = i;
        }
        for (int i = len - 1; i >= 0; i--){
            if (count[nums[i]] == max_degree){
                if ((i - fi[nums[i]] + 1) < ans)
                    ans = i - fi[nums[i]] + 1;
            }
            count[nums[i]] = 0;
        }
        
        return ans;
 
    }
