class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(int i=0;i< J.length(); i++){
            for(int j =0; j< S.length(); j++ ){
                if(J.at(i) == S.at(j)){
                    count++;
                }
            }
        }
        return count;
    }
};
