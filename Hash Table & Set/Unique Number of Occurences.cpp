/*
Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Input: arr = [1,2]
Output: false
*/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();   
        unordered_map<int,int> map;
        unordered_set<int> set;
        for (int i = 0; i < n; i++) { 
            map[arr[i]]++;
        }
        auto x=0;
        for(auto x = map.begin(); x!=map.end();x++){
            set.insert(x->second);
        }
        
        if(map.size()== set.size())
            return true;
        return false;
    }
};
