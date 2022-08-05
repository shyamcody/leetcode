//https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> rep;
        if(n==0){
            rep.push_back(0);
            return rep;
        }
        else if(n==1){
            rep.push_back(0);
            rep.push_back(1);
            return rep;
        }
        else if(n>1){
            rep.push_back(0);
            rep.push_back(1);
            for(int i = 2; i<n+1;i++){
                rep.push_back(rep[i>>1]+ (i & 1));
            }
        }
        return rep;
    }
};
