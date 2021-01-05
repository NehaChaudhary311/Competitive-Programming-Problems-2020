/*
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example 1:
Input:
9 3
1 2 3 1 4 5 2 3 6

Output: 
3 3 4 5 5 5 6 

Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6

Example 2:
Input:
10 4
8 5 10 7 9 4 15 12 90 13

Output: 
10 10 10 15 15 90 90
*/

//APPROACH 1: Using two nested for loops and keeping track of k window size in both of the loops
//Time: O(N^2)
vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    int j, max; 
    vector<int> res;
    for (int i = 0; i <= n - k; i++) 
    { 
        max = arr[i]; 
 
        for (j = 1; j < k; j++) 
        { 
            if (arr[i + j] > max) 
                max = arr[i + j]; 
        } 
        res.push_back(max);
    } 
    return res;
}
