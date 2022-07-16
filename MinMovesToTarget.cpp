class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps = 0;
        while(target!=1 && maxDoubles>0){
            if(target%2==0)
            {
                target = target/2;
                maxDoubles -= 1;
                steps += 1;
            }
            else if(target%2==1){
                target = target-1;
                steps += 1;
            }
        }
        steps += target - 1;
        return steps;
    }
};
