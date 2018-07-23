class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n, i, ans;
        
        n = nums.size();
        
        vector<int> count(n);
        vector<int> a(0);
        
        for (i = 0; i < n; i++)
            count[nums[i] - 1]++;
        
        for (i = 0; i < n; i++){
            if (count[i] == 0)
                a.push_back(i + 1);
        }
        
        return a;
    }
};
