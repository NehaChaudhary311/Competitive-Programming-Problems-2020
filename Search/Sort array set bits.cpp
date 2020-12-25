/*
Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 
Note: For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.

Example 1:
Input: 
arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
Output:
15 7 5 3 9 6 2 4 32
*/
class Solution{
    public:
    //Brian Kernighan’s Algorithm - (logn)
    static int countSetBits(int n) 
    { 
        int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 
    static bool cmp(int a, int b){
        int count1 = countSetBits(a);
        int count2 = countSetBits(b);
        if (count1 <= count2)
            return false;
        return true;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr, arr + n, cmp);
    }
};
