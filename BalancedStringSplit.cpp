class Solution {
public:
    int balancedStringSplit(string s) {
        int count_balance = 0;
        int queue_val = 0;
        for(int i = 0; i< s.length();i++)
        {
            if(s[i] == 'R'){
                queue_val += 1;
            }
            else{
                queue_val -= 1;
            }
            if(queue_val==0)
            {
                count_balance += 1;
            }
        }
        return count_balance;
    }
};
