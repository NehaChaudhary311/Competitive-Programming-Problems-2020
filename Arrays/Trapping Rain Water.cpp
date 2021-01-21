//O(n) time
//O(n) space
int trappingWater(int arr[], int n){

    int left[n], right[n], ans = 0;
    
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    for (int i = 0; i < n; i++)
        ans += min(left[i], right[i]) - arr[i];
 
    return ans;
}
