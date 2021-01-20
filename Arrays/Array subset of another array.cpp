/*
Given two arrays: arr1[0..m-1] of size m and arr2[0..n-1] of size n. Task is to check whether arr2[] is a subset of arr1[] or not. 
Both the arrays can be both unsorted or sorted. It may be assumed that elements in both array are distinct.
Input:
3
6 4
11 1 13 21 3 7
11 3 7 1
6 3
1 2 3 4 5 6
1 2 4
5 3
10 5 2 23 19
19 5 3

Output:
Yes
Yes
No

*/

string arraySubsetArray(vector<int> a, int m, vector<int> b, int n){
    set<int> s; 
    for (int i = 0; i < m; i++) 
    { 
        s.insert(a[i]); 
    } 
    for (int i = 0; i < n; i++) { 
        if (s.find(b[i]) == s.end()) 
            return "No"; 
    } 
    return "Yes";
}
