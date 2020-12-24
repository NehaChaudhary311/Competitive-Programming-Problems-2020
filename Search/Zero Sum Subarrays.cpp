ll findSubarray(vector<ll> arr, int n ) {
    //code here
    unordered_map<int,int>mp;
    mp[0]++;
    ll count = 0, sum = 0;
    for(int i = 0; i<n; i++){
        
        sum += arr[i];
        
        if(mp.find(sum) != mp.end()){
            count += mp[sum];   
        }
        mp[sum]++;
    }
    return count;   
}
