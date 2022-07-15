class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //check both ends, if not inch inside in
        /*https://javascript.plainenglish.io/ways-to-solve-the-classic-two-sum-algorithm-question-with-an-explanation-on-big-o-ba845b08001e*/
        int length = numbers.size();
        int index_left = 0;
        int index_right = length-1;
        vector<int> indices;
        while(numbers[index_left]+numbers[index_right]!=target)
        {
            int sum = numbers[index_left] + numbers[index_right];
            if(sum>target)
            {
                index_right--;
            }
            if(sum<target)
            {   
                index_left++;
            }
        }
        indices = {index_left+1,index_right+1};
        return indices;
    }
};
