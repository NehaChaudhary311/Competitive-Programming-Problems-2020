/*
Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]

*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0 ; i<nums.size(); i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto i = m.begin(); i!= m.end(); i++)
        {
            pq.push(make_pair(i->second, i->first));
        }
    
        vector<int> res;
        while(!pq.empty() && k!=0 )
        {
            int a = pq.top().second;
            res.push_back(a);
            pq.pop();
            k--;
            
        }
        return res;
    }
};
