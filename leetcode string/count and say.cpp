class Solution {
public:
    string countAndSay(int n) {
        
        vector<string> answers(n + 1);
        answers[0] = "1";

        for (int i = 1; i < n; i++){
            string prev = answers[i - 1];
            string result;
    
            char current_char;
            int l = 0;

            while (l < prev.length()){
                current_char = prev[l];

                int count = 1;
                while (prev[l + 1] == current_char){
                    count++;
                    l++;
                }

                result += to_string(count) + current_char;

                l++;
            }
            
            answers[i] = result;
        }
        
        return answers[n - 1];
    }
};
