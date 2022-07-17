class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length = nums.size();
        int biggest_sum = 0;
        for(int i = 0; i<nums.size()/2;i++)
        {
            int sum = nums[i]+nums[length-i-1];
            if(sum > biggest_sum)
            {
                biggest_sum = sum;
            }
        }
        return biggest_sum;
    }
};
