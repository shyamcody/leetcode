class Solution {
public:
    int minimumSum(int num) {
        int digits[4];
        for(int i = 0; i<4;i++){
            digits[i] = num%10;
            num = num/10;
        }
        sort(digits,digits+4);
        int min_sum = (digits[0]+digits[1])*10+(digits[2]+digits[3]);
        return min_sum;
    }
};
