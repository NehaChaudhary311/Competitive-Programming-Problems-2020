/*
Based on Chebyshev distance
*/

class Solution {
    int distance(int x1, int y1, int x2, int y2) {
        return max(abs(x1 - x2), abs(y1 - y2));
    }
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        
        int n = points.size();
        int x1, y1, x2, y2;
        
        for(int i = 1; i < n; ++i) {
            x1 = points[i-1][0];
            y1 = points[i-1][1];
            x2 = points[i][0];
            y2 = points[i][1];
            ans += distance(x1, y1, x2, y2);
            
        }
        
        return ans;
    }
};
