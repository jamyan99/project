class Solution {
public:
    string addBinary(string a, string b) {
        int n1, n2, i, rem = 0, sum;
        
        string ans;
        
        n1 = a.size() - 1;
        n2 = b.size() - 1;
        
        while (n1 >= 0 && n2 >= 0){
            sum = (a[n1] - '0') + (b[n2] - '0') + rem;
            
            if (sum % 2 == 0 || sum == 0)
                ans += '0';
            else
                ans += '1';
            
            rem = 0;
            
            if (sum > 1)
                rem = 1;
            
            n1--;
            n2--;
        }

        while (n1 >= 0){
            sum = (a[n1] - '0') + rem;
            
            if (sum % 2 == 0 || sum == 0)
                ans = ans + '0';
            else
                ans = ans + '1';

            rem = 0;
            
            if (sum >= 2)
                rem = 1;

            n1--;
        }

        while (n2 >= 0){
            sum = (b[n2] - '0') + rem;
            
            if (sum % 2 == 0 || sum == 0)
                ans = ans + '0';
            else
                ans = ans + '1';

            rem = 0;
            
            if (sum >= 2)
                rem = 1;

            n2--;
        }
        
        if (rem == 1)
            ans += '1';
        
        for (i = 0; i < ans.size() / 2; i++)
            swap(ans[i], ans[ans.size() - i - 1]);
        
        return ans;
    }
};
