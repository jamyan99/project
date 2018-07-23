class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j = 0;
        
        vector <int> result(n + m);
        
        while (i < m && j < n){
            if (nums1[i] > nums2[j]){
                result[i + j] = nums2[j];
                j++;
            }else{
                result[i + j] = nums1[i];
                i++;
            }
        }
        while (i < m){
            result[i + j] = nums1[i];
            i++;
        }
        while (j < n){
            result[i + j] = nums2[j];
            j++;
        }
        
        nums1 = result;
        
    }
};
