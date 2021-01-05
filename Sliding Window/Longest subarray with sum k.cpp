/*
Given an array containing N integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.
ASSUMPTION: Only positive numbers are there in the array
*/

//APPROACH 1: Use sliding window concept 
//i is on the left, j is on the right

int longestSubArray(vector<int> a, int n, int k){
    int i = 0, j = 0; //left and right pointers
    int curr_sum = 0;
    int mx = INT_MIN;
    while(j < n){
        curr_sum += a[j];
        if(curr_sum < k) j++;
        else if(curr_sum == k){
            curr_sum -= a[i];
            mx = max(mx, (j-i+1));
            i++;
            j++;
            
        }
    }
    return mx;
}
