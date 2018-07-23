class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n, i, ans, j = 0;
        
        n = nums.size();
        
        vector <int> a(n);
        
        for (i = 0; i < n; i++){
            if (nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
       return j;
    }
};
