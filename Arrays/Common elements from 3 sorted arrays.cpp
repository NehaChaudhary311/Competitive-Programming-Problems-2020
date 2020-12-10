//APPROACH 1: Use binary search on the arrays as they are already sorted. But it has a problem. What if you have a testcase like this
// A[] = {3,3,3}
// B[] = {3,3,3}
// C[] = {3,3,3}
// Here, the output should be [3], but using binary search, we would get [3,3,3]. So, we've got to handle duplicates.
bool binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return true;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return false;
}
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    //code here.
    vector<int> ans;

    for(int i = 0; i<n1; i++){
        int x = A[i];
        if(binarySearch(B, 0, n2-1, x) && binarySearch(C, 0, n3-1, x)) 
            ans.push_back(x);
    }
    return ans;
}
