#include<iostream>
#include<algorithm>
using namespace std;
int solve(int a[], int n, int diff){
    sort(a, a+n);
    int i = 0;
    int j = i + 1;
    while(i < n && j < n){
        if(abs(a[j] - a[i]) == diff && i != j)
            return 1;
        else if(abs(a[j] - a[i]) > diff){
            i++;
        }else{
            j++;
        }
    }
    return -1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, diff;
	    cin>>n>>diff;
	    int *a = (int*)malloc(sizeof(int)*n);
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	    }
	    cout<< solve(a, n, diff) <<endl;
	    
	    
	}
	return 0;
}
