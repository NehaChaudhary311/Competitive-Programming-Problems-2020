class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       if(intervals.size()<=1) return intervals;
        //wanna make sure that [a,b],[c,d] are sorted where a<c
        sort(intervals.begin(), intervals.end());
        
        //output array
        vector<vector<int>> a; 
        
        //push the first element in output array
        a.push_back(intervals[0]);
        
        //loop from intervals[1] to intervals[n]
        for(int i=1; i<intervals.size(); i++) {
            //if the output end is greater than intervals beginning, then change output end to
            //max(output_end, interval_end)
            if(a.back()[1] >= intervals[i][0])
                a.back()[1] = max(a.back()[1] , intervals[i][1]);
            //otherwise push the new interval to output array
            else 
                a.push_back(intervals[i]); 
        }
        return a;
    }
};
