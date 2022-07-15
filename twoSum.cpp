class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //https://leetcode.com/problems/two-sum/submissions/
        int length = nums.size();
        vector<int> vect;
        for(int i=0; i<length-1; i++)
        {
            for(int j = i+1; j<length; j++)
           {
             if(nums[i]+nums[j] == target)
             {
              vect = {i,j};
              
              break;
             }
           }
        }
        return vect;
    }
};
