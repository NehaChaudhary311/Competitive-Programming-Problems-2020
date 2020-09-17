/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
After doing so, return the array.

Example 1:
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]

*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), temp, mx = -1;
        for(int i = n-1; i >= 0; i--)
        {
            temp = arr[i];
            arr[i] = mx;
            mx = max(mx,temp);
        }
        return arr;
    }
};
