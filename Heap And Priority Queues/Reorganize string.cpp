/*
Given a string S, check if the letters can be rearranged so that two characters that are adjacent to each other are not the same.
If possible, output any possible result.  If not possible, return the empty string.

Example 1:
Input: S = "aab"
Output: "aba"

Example 2:
Input: S = "aaab"
Output: ""

*/
class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char, int> mp;
        for(int i = 0; i < S.length(); i++) {
            mp[S[i]]++;
        }

        priority_queue<pair<int, char>> maxh;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            maxh.push(make_pair(it->second, it->first));
        }

        string s;

        while(maxh.size() >= 2) {
            pair<int, char> a = maxh.top();
            maxh.pop();

            pair<int, char> b = maxh.top();
            maxh.pop();

            while(b.first > 0) {
                s.push_back(a.second);
                s.push_back(b.second);

                b.first--;
                a.first--;
            }
        if(a.first > 0)
            maxh.push(a);
        }    
        if(maxh.empty())
            return s;

        if(maxh.top().first > 1)
            return "";

        else if(maxh.top().first == 1)
            s.push_back(maxh.top().second);
        return s;

    }
};
