class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int s = nums.size();
        int sum = 0;
        
        int max = nums[0];
        int min = nums[0];
        
        for (int i = 0; i < s; i ++) {
            if (max < nums[i])
                max = nums[i];
            if (min > nums[i])
                min = nums[i];
        }
        int n = max - min + 1;
        int a[n];
        
        for (int i = 0; i < n; i ++) 
            a[i] = 0;
        
        for (int i = 0; i < s; i ++) {
            a[nums[i] - min] ++;
        }
        
        int k = 0;
        for (int i = 0; i < n; i ++) {
            while (a[i] > 0) {
                if (k % 2 == 0)
                    sum += i + min;
                k ++;
                a[i] --;
            }
                
        }
        
        
        return sum;
        
    }
};
