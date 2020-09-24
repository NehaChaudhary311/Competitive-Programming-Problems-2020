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
	    int count = 0;
	    for(int i = 0; i<= n;i++){
	        int num = i;
	        while(num){
	            if(num&1 == 1)
	                count++;
	            num = num >>1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
