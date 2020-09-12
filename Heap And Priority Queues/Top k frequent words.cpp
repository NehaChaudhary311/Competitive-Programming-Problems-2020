/*
Given a non-empty list of words, return the k most frequent elements.
Your answer should be sorted by frequency from highest to lowest. If two words have the same frequency, then the word with the lower alphabetical order comes first.

Example 1:
Input: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
Output: ["i", "love"]
Explanation: "i" and "love" are the two most frequent words.
    Note that "i" comes before "love" due to a lower alphabetical order.

Example 2:
Input: ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"], k = 4
Output: ["the", "is", "sunny", "day"]
Explanation: "the", "is", "sunny" and "day" are the four most frequent words,
    with the number of occurrence being 4, 3, 2 and 1 respectively.
    
*/

class Solution {
public:
    // function to sort the words according to the frequency of them
    static bool cmp(pair<string, int>&a, pair<string, int>&b){
        if(a.second > b.second)
            return true;
        // comparator to check for the equal occurence of frequency of the words in the map
        else if(a.second == b.second)
            return a.first < b.first;
        else
            return false;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(int i = 0; i < words.size(); i++)  // count the frequency of the words 
            mp[words[i]]++;
        //I planned to use a priority_queue but couldn't as then I wouldn't have been able to
        //sort the priority_queue according to my need in the need
        //because the question asks for a particular order of strings when their frequencies are equal
        vector<pair<string, int>> v;
        vector<string> ans;
        
        for(auto&itr: mp) // push the strings to the vector
            v.push_back(itr);
        
        sort(v.begin(), v.end(), cmp); // sort them according to their frequency
        
        for(auto &itr : v){ // store the result
            ans.push_back(itr.first);
            k--;
            if(k == 0)
                break;
        }
        return ans;
    }
};
