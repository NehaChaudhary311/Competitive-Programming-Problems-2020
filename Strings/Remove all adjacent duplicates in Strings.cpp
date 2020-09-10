#include<string>
class Solution {
public:
    string removeDuplicates(string S) {
        int i = 0;
        
        while(i + 1 < S.length()){
            if(S.at(i) == S.at(i + 1)){
                S.erase(i, 2);
                i -= 1;
                if (i<0)
                    i=0;
            } 
            else 
                i++;
        }
        return S;
    }
};
