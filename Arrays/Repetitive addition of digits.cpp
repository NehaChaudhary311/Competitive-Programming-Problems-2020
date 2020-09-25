#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int sum = 0;
	    while(n>0 || sum>9){
	        if(n==0){
	            n = sum;
	            sum = 0;
	        }
	        sum += n%10;
	        n = n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
