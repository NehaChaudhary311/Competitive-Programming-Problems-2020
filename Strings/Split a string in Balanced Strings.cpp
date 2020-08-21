/*

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, res = 0, n = s.length();
        for (int i = 0; i < n ; i++) {
            if (s[i] == 'R') 
                count++;
            else
                count--;
            if (count == 0)
                res++;
        }
        return res;
    }
};

*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, res = 0, n = s.length();
        for (int i = 0; i < n ; i++) {
            if (s[i] == 'R') 
                count++;
            else
                count--;
            if (count == 0)
                res++;
        }
        return res;
    }
};
