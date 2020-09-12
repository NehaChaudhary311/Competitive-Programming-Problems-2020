/*

Given a string, sort it in decreasing order based on the frequency of characters.
Input: "tree"

Output: "eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

*/
class Solution {
public:
    string frequencySort(string s)
    {
        //will store the char corresponding to its frequency
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
       priority_queue<pair<int,char>>pq;
       //use the priority queue to make the pair 'm' in decreasing order of their frequencies
        for(auto i=m.begin();i!=m.end();i++){
            pq.push(make_pair(i->second,i->first));
            
        }
      
        string st="";
        while(pq.size()>0){
            int a=pq.top().first;
            char b=pq.top().second;
            while(a--){
                st+=b;
            }
            pq.pop();
        }
        return st;
    }
};
