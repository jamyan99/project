class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int p1 = 0, p2 = 0, n;
        
        double ans;
        
        vector<int> a;
        
        while (p1 < nums1.size() && p2 < nums2.size()){
            if (nums1[p1] <= nums2[p2]){
                a.push_back(nums1[p1]);
                p1++;
            }else{
                a.push_back(nums2[p2]);
                p2++;
            }
        }
        
        while (p1 < nums1.size()){
            a.push_back(nums1[p1]);
            p1++;
        }
            
        while (p2 < nums2.size()){
            a.push_back(nums2[p2]);
            p2++;
        }
            
        n = a.size();
            
        if (n % 2 != 0){
            ans = a[n / 2];
            return ans;
        }

        if (n % 2 == 0){
            ans = ((a[n / 2] + a[(n / 2) - 1]) / 2.0);
            return ans;
        }
        
    }
};
